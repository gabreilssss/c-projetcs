#ifndef GAME_H
#define GAME_H


#include "actor.h"
#include <ncurses.h>

typedef struct Game{
    Actor player;
}Game;

//constructor and destructor

Game* game_init(void);
void game_destroy(Game*);


//globals
extern Game* game;


#endif

