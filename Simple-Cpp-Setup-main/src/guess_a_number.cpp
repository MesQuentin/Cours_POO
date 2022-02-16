#include "guess_a_number.h"
#include <iostream>
#include <random>

int init()
{
    std::cout << "I picked a number between 0 and 100" << std::endl;
    std::cout << "Take a guess !" << std::endl;
    int number = randomize_0_to_100();

    return number;
}

int randomize_0_to_100()
{
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{0, 100};
    return distribution(generator);
}

int user_take_a_guess()
{
    int guess;
    while (!(std::cin >> guess)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input; please enter a int between 0 and 100 ^^ .\n";
    }
    return guess;
}

int compare(int solution, int guess)
{
    if (solution < guess) {
        std::cout << "Lower !" << std::endl;
    }
    if (solution > guess) {
        std::cout << "Greater !" << std::endl;
    }
    if (solution == guess) {
        std::cout << "Congrats, you won !" << std::endl;
        return 1;
    }

    return 0;
}

void guess_a_number()
{
    int  solution    = init();
    bool is_finished = false;

    while (!is_finished) {
        int guess   = user_take_a_guess();
        is_finished = compare(solution, guess);
    }
}