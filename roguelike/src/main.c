#include <ncurses.h>
#include <stdbool.h>
#include <stdint.h>

typedef int64_t i64;




void game_loop(){
    char player = '@';
    i64 player_y = LINES/2;
    i64 player_x = COLS/2;
    mvaddch(player_y,player_x, player);
    getch();


}


int main(){

    initscr();
    curs_set(0);
    noecho();
    keypad(stdscr, TRUE);

    game_loop();


    endwin();

    return 0;
    
}