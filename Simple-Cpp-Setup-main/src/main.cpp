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
    }
    guess_a_number();
    return 0;
}