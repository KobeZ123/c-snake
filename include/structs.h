#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
    int x; 
    int y;
} Position;

typedef struct Node {
    Position pos;
    struct Node *prev;
    struct Node *next;
} Node;

// a snake is a linked list of Nodes 
typedef struct {
    Node *head;
    Node *tail;
    int length;
} Snake;


// a collectible spawns on a singular spot with a type 
typedef struct {
    Position pos;
    char *name;
} Collectible;


// the standard rectangle map representation
typedef struct {
    int width; 
    int height;
} Map;

// the game state 
typedef struct {
    Snake *snake;
    Collectible *collectible;
    Map *map;
} GameState;

#endif 