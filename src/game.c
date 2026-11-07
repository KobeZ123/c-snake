#include <stdbool.h>

#include "collectible.h"
#include "game.h"
#include "snake.h"

GameState initialize_game_state() {
    Snake snake; 
    initialize_snake(&snake);
    
    Map map;
    initialize_standard_map(&map);

    Position midpoint = { (map.width / 2), (map.height / 2) };

    snake_push_head(&snake, midpoint);
    Position map_bounds = { map.width, map.height};
    Collectible collectible = spawn_collectible(map_bounds);

    GameState game_state = { &snake, &collectible, &map }; 
    return game_state;
}

void register_input(char input) {

}


void run_game(GameState *game_state) {
    bool is_playing = true;

    while (is_playing) {
        // TODO: get input 
        char input;
        input = getchar();

        if (input == 'Q') {
            is_playing = false;
            break;
        }

        register_input(input);
        
    }
}

void free_game_state(GameState *game_state) {
    free_snake(game_state->snake);  
}