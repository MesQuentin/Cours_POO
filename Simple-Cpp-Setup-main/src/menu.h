#pragma once
#include <iostream>
#include <map>
#include "general_store.h"
#include "guess_a_number.h"
#include "hangman.h"
#include "menudventure.h"
#include "nought_and_crosses.h"

struct Game {
    std::string           name;
    std::function<void()> game;
};

void menu();
void command_list();
