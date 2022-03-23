#pragma once

template<typename T>

T get_input_from_user()
{
    T choice;
    while (!(std::cin >> choice)) {
        std::cin.clear();
        std::cout << "*This ... is not really what was asked of you." << std::endl;
        std::cout << "The old man waits for your next answer with hope (Invalid Input)*\n\n";
    }

    return choice;
}