#ifndef SNAKE_H
#define SNAKE_H

#include "structs.h"

void initialize_snake(Snake *snake);
int snake_push_head(Snake *snake, Position pos);
void snake_pop_tail(Snake *snake);
void free_snake(Snake *snake);

#endif 