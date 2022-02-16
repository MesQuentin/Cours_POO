#pragma once

int  init();
int  user_take_a_guess();
int  randomize_0_to_100();
void is_the_player_bad(int nb_tries);
bool compare(int solution, int guess, bool is_finished);
void guess_a_number();