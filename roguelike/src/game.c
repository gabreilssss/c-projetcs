#include "game.h"
#include <stdlib.h>

Game* game_init(void){
    Game* game = calloc(1, sizeof(Game));
    game->player = (Actor){
        .sym = '@',
        .y = LINES/2,
        .x = COLS/2,
    };
    return game;
}

void game_destroy(Game* game){
    free(game);
}
