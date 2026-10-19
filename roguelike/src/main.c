
#include <stdbool.h>

#include "game.h"

void game_loop(void);

Game* game;

int main(){

    initscr();
    curs_set(0);
    noecho();
    keypad(stdscr, TRUE);


    game = game_init();
    game_loop();
    game_destroy(game);


    endwin();

    return 0;
    
}


void game_loop(void){

    Actor* player = &game->player;

    int ch;
    while ((ch = getch())){

        clear();

        bool game_over = false;

        switch(ch){
            case 'q': game_over = true; break;
            case KEY_UP: --player->y; break;
            case KEY_DOWN: ++player->y; break;
            case KEY_LEFT: --player->x; break;
            case KEY_RIGHT: ++player->x; break;

        }

        mvaddch(player->y,player->x, player->sym);
        refresh();

        if (game_over == true){
            break;
        }
    }

}