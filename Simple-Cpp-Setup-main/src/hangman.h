#pragma once
#include <iostream>
#include <random>
#include <string>

namespace Hangman {
std::string pick_a_word();
char        take_a_guess();

int result(std::string& word, char guess, int lives);

bool is_player_alive(int lives_number);

void        show_lives(int lives);
bool        progression(std::string word, const std::string& tried);
void        show_tried_letters(std::string tried);
static void show_defeat(std::string& word);
void        show_victory(std::string& word);
} // namespace Hangman

void hangman();