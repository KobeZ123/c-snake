#include "game.h"
#include "snake.h"

int main(void) {
    GameState game_state = initialize_game_state();

    run_game(&game_state);    

    free_game_state(&game_state);

    return;
}