#ifndef GAME_H
#define GAME_H 

#include "structs.h"

GameState initialize_game_state();

void register_input(char input);

void run_game(GameState *game_state);

void free_game_staate(GameState *game_state);

#endif 