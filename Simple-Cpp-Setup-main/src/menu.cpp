#include "menu.h"

std::map<char, Game> game_map = {
    {'1', {"Guess a number", guess_a_number}},
    {'2', {"Hangman", hangman}},
    {'3', {"Nought and Crosses", nought_and_crosses}},
    {'4', {"Menudventure", menudventure}}};

void command_list()
{
    std::cout << "* You wake up next to a campfire. A strange man is sitting in front of you. *" << std::endl;
    std::cout << "(old man voice) Welcome Traveler !" << std::endl;
    std::cout << "                   Would you like to play a game ?" << std::endl;

    for (const auto& [key, game] : game_map) {
        if (key == '4') {
            std::cout << key << ". Rob the old man with a gun and steal his clothes" << std::endl;
        }
        else {
            std::cout << key << ". Play " << game.name << std::endl;
        }
    }
    std::cout << std::endl;

    std::cout << "Q. Politely refuse and leave  (Quit)" << std::endl;
}

void menu()
{
    bool quit = false;

    while (!quit) {
        command_list();
        const auto choice = get_input_from_user<char>();
        std::cout << std::endl;
        if (choice == 'Q' || choice == 'q') {
            std::cout << "*The old man looks at you extremely sad as you close your eyes*" << std::endl;
            std::cout << std::endl
                      << "Good night, traveler" << std::endl
                      << std::endl;
            quit = true;
        }
        else {
            game_map[choice].game();
            std::cout << std::endl;
        }
    }
}
