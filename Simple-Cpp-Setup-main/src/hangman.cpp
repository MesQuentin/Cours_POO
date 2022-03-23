#include "hangman.h"

namespace Hangman {
std::string pick_a_word()
{
    std::vector<std::string>           bank = {"tutrouverasjamaisgrosnul"};
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{0, static_cast<int>(bank.size())};
    return bank[distribution(generator)];
}

static bool is_player_alive(int lives_number)
{
    return (!(lives_number)) == 0;
}

static char take_a_guess()
{
    char guess;
    while (!(std::cin >> guess)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input; please enter a single letter ^^\n";
    }
    return guess;
}

static bool is_guess_in_word(std::string word, char guess)
{
    return std::any_of(word.begin(), word.end(), [guess](char word) { return guess == word; });
}

static int result(const std::string& word, char guess, int lives)
{
    if (is_guess_in_word(word, guess)) {
        std::cout << "Yeah !" << std::endl;
    }
    else {
        std::cout << "Nope !" << std::endl;
        lives -= 1;
    }

    return lives;
}

static void show_defeat(const std::string& word)
{
    std::cout << "GAME OVER" << std::endl;
    std::cout << "Welp, you tried anyway. Better luck next time !" << std::endl;
    std::cout << "The word was \"" << word << "\"" << std::endl;
}

static void show_victory(const std::string& word)
{
    std::cout << "Well Played, you won !" << std::endl;
    std::cout << "The word was \"" << word << "\"" << std::endl;
}

static void show_lives(int lives)
{
    std::cout << "You have " << lives << " lives left" << std::endl;
}

static bool progression(std::string word, const std::string& tried)
{
    std::string progression(word.length(), '_');

    for (int k = 0; k < word.length(); k++) {
        for (auto& l : tried) {
            if (word[k] == l) {
                progression[k] = l;
                break;
            }
        }
    }

    std::cout << progression;
    if (progression == word) {
        show_victory(word);
        return false;
    }
    return true;
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
}

} // namespace Hangman

void hangman()
{
    std::string word          = Hangman::pick_a_word();
    int         lives         = 8;
    std::string tried_letters = {};

    while (Hangman::is_player_alive(lives)) {
        Hangman::show_lives(lives);
        if (Hangman::progression(word, tried_letters)) {
            Hangman::show_tried_letters(tried_letters);
            char guess = Hangman::take_a_guess();
            lives      = Hangman::result(word, guess, lives);
        }
    }

    if (!Hangman::is_player_alive(lives)) {
        Hangman::show_defeat(word);
    }
}