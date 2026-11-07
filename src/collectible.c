#include <stdio.h>

#include "collectible.h"

Collectible spawn_collectible(Position pos) {
    int rand_width = (rand() % pos.x);
    int rand_height = (rand() % pos.y);

    Position rand_pos = { rand_width, rand_height };

    size_t length = sizeof(COLLECTIBLE_NAMES) / sizeof(COLLECTIBLE_NAMES[0]);
    int rand_index = (rand() % length);
    char* rand_name = COLLECTIBLE_NAMES[rand_index];

    Collectible collectible = { rand_pos, rand_name };
    return collectible;
}