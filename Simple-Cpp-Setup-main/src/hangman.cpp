#include "hangman.h"
#include <algorithm>

Word::Word(const int& repetition, const char& symbol)
{
    for (int i = 0; i < repetition; i++) {
        this->word += symbol;
    }
}

namespace Hangman {

Word pick_a_word()
{
    Word              godasse("godasse");
    Word              hubris("hubris");
    Word              nescience("nescience");
    Word              hypocoristique("hypocoristique");
    Word              genocidaire("genocidaire");
    Word              gentleman("gentleman");
    Word              ubuesque("ubuesque");
    std::vector<Word> bank = {godasse, hubris, nescience, hypocoristique, genocidaire, gentleman, ubuesque};

    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{0, static_cast<int>(bank.size())};
    return bank[distribution(generator)];
}

static bool is_player_alive(int lives_number)
{
    return (!(lives_number)) == 0;
}

static bool is_guess_in_word(std::string word, char guess)
{
    return std::any_of(word.begin(), word.end(), [guess](char letter) { return guess == letter; });
}

static int result(const Word& word, const char guess, int lives)
{
    if (is_guess_in_word(word.get_word(), guess)) {
        std::cout << std::endl;
        std::cout << "Yeah !" << std::endl;
    }
    else {
        std::cout << std::endl;
        std::cout << "Nope !" << std::endl;
        lives -= 1;
    }

    return lives;
}

static void show_defeat(const Word& word)
{
    std::cout << "GAME OVER" << std::endl;
    std::cout << "Welp, you tried anyway. Better luck next time !" << std::endl;
    std::cout << " *The heavy crack of the man's neck behind the old man ends the conversation*" << std::endl;
    std::cout << "The word was \"" << word.get_word() << "\"" << std::endl;
}

static void show_victory(const Word& word)
{
    std::cout << "Well Played, you won !" << std::endl;
    std::cout << "*The rope around the man's neck suddenly disappears, and he leaves overjoyed*" << std::endl;
    std::cout << "*You have made him a happy and living man*" << std::endl;
    std::cout << "The word was \"" << word.get_word() << "\"" << std::endl;
}

static void show_introduction()
{
    std::cout << " Very good choice!" << std::endl;
    std::cout << " *A man appears behind him with a rope around his neck.*" << std::endl;
    std::cout << " *The man starts to scream in panic while the old man looks at you delighted.*" << std::endl;
    std::cout << std::endl;
}
static void show_lives(int lives)
{
    std::cout << "You have " << lives << " lives left" << std::endl;
}

static Word get_progression(const Word& word, const std::string& tried)
{
    const std::string sol  = word.get_word();
    int               size = static_cast<int>(sol.size());
    Word              progression(size, '_');

    for (int unsigned k = 0; k < progression.get_word().length(); k++) {
        for (const auto& l : tried) {
            // Could use std::find_if but nvm
            if (sol[k] == l) {
                progression.set_letter(l, k);
                break;
            }
        }
    }

    return progression;
}

static bool has_won(const Word& word, const Word& progression)
{
    return word.get_word() == progression.get_word();
}

static void show_tried_letters(std::string tried)
{
    std::cout << "Tried letters : ";
    for (auto& k : tried) {
        if (k == tried.back()) {
            std::cout << k << std::endl;
        }
        else {
            std::cout << k << ", ";
        }
    }
    std::cout << std::endl;
}

} // namespace Hangman

void hangman()
{
    Word        word          = Hangman::pick_a_word();
    int         lives         = 8;
    std::string tried_letters = {};

    int  size = static_cast<int>(word.get_word().size());
    Word progression(size, '_');

    Hangman::show_introduction();

    while (Hangman::is_player_alive(lives) && !Hangman::has_won(word, progression)) {
        Hangman::show_lives(lives);

        std::string progress = progression.get_word();
        std::cout << progress << std::endl;
        Hangman::show_tried_letters(tried_letters);
        const auto guess = get_input_from_user<char>();

        tried_letters += guess;
        lives       = Hangman::result(word, guess, lives);
        progression = Hangman::get_progression(word, tried_letters);
    }

    if (!Hangman::is_player_alive(lives)) {
        Hangman::show_defeat(word);
    }

    else {
        Hangman::show_victory(word);
    }
}