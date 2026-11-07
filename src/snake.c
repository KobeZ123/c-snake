#include "snake.h"
#include <stdlib.h>

void initialize_snake(Snake *snake) {
    snake->head = NULL;
    snake->tail = NULL;
    snake->length = 0;
}

int snake_push_head(Snake *snake, Position pos) {
    Node *node = malloc(sizeof *node);

    if (node == NULL) {
        return 0;
    }

    node->pos = pos;
    node->prev = NULL;
    node->next = snake->head;

    if (snake->head != NULL) {
        snake->head->prev = node;
    } else {
        snake->tail = node;
    }

    snake->head = node;
    snake->length++;
    
    return 1;
}

void snake_pop_tail(Snake *snake) {
    if (snake->tail == NULL){
        return;
    }

    Node *deleted_tail = snake->tail;

    snake->tail = snake->tail->prev;

    // checks if we have fully removed the snake
    if (snake->tail != NULL) {
        snake->tail->next = NULL;
    } else {
        snake->head = NULL;
    }

    free(deleted_tail);
    snake->length--;    
}

void free_snake(Snake *snake) {
    Node *current = snake->head;

    while (current != NULL) {
        Node *node = current->next;
        free(current);
        current = node;
    }

    snake->head = NULL;
    snake->tail = NULL;
    snake->length = 0;
}