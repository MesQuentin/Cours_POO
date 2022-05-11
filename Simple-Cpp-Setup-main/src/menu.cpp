#include "menu.h"

void command_list()
{
    std::cout << "* You wake up next to a campfire. A strange man is sitting in front of you. *" << std::endl;
    std::cout << "(old man voice) Welcome Traveler !" << std::endl;
    std::cout << "                   Would you like to play a game ?" << std::endl;
    std::cout << " 1. Play Guess a number" << std::endl;
    std::cout << " 2. Play Hangman" << std::endl;
    std::cout << " 3. Play Nought and Crosses" << std::endl;
    std::cout << " 4. Rob the old man with a gun and steal his clothes" << std::endl;
    std::cout << std::endl;
    std::cout << " 5. Politely refuse and leave  (Quit)" << std::endl;
}

void menu()
{
    std::map<char, Game> game_map{
        {'1', {"guess_a_number", guess_a_number()}},
        {'2', {"hangman", hangman()}},
        {'3', {"menudventure", menudventure()}},
        {'4', {"nought_and_crosses", nought_and_crosses()}},
    };

    bool quit = false;
    while (!quit) {
        command_list();
        const auto choice = get_input_from_user<char>();
        std::cout << std::endl;
        switch (choice) {
        case '1':
            guess_a_number();
            std::cout << std::endl;
            break;

        case '2':
            hangman();
            std::cout << std::endl;
            break;

        case '3':
            nought_and_crosses();
            break;

        case '4':
            Menudventure::start();
            break;

        case '5':
            std::cout << "*The old man looks at you extremely sad as you close your eyes*" << std::endl;
            std::cout << std::endl
                      << "Good night, traveler" << std::endl
                      << std::endl;
            quit = true;
        }
    }
}
