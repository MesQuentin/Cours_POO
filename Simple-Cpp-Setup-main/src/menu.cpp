#include "menu.h"

void command_list()
{
    std::cout << "(old man voice) Welcome Traveler !" << std::endl;
    std::cout << "                   Would you like to play a game ?" << std::endl;
    std::cout << " 1. Play Guess a number" << std::endl;
    std::cout << " 2. Play Hangman" << std::endl;
    std::cout << " 3. Rob the old man with a gun and steal his clothes" << std::endl;
    std::cout << std::endl;
    std::cout << " 4. Politely refuse and leave  (Quit)" << std::endl;
}

void menu()
{
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

            // case '3':
            //     menudventure();
            //     break;

        case '4':
            std::cout << "*The old man looks at you with a sad graze. He looks like a wet labrador." << std::endl;
            std::cout << " You walk away, ignoring the pitying looks he gives you*" << std::endl
                      << std::endl;
            quit = true;
        }
    }
}

void menudventure()
{
}