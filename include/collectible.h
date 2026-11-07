#ifndef COLLECTIBLE_H
#define COLLECTIBLE_H

#include "structs.h"

const char* COLLECTIBLE_NAMES = { "Apple", "Banana", "Pear", "Orange", "Peach", "Grape" };

// spawns a random collectible at a location from (0, 0) to Position
Collectible spawn_collectible(Position pos);

#endif