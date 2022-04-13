#pragma once

#include <iostream>
#include <random>
#include <string>
#include "guess_a_number.h"

class Word {
public:
    Word();
    explicit Word(const std::string& word)
        : word(word) {}
    Word(const int& number, const char& symbol);

    inline std::string get_word() const
    {
        return this->word;
    }

    inline void set_letter(char l, unsigned int place)
    {
        this->word[place] = l;
    }

private:
    std::string word;
};

void hangman();