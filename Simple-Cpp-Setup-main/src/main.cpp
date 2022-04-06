#include <iostream>
#include "general_store.h"
#include "guess_a_number.h"
#include "menu.h"

int main()
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

            // case '2':
            //     hangman();
            //     break;

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
    return 0;
}