#include <ncurses.h>

int main(void){
    initscr();

    mvprintw(LINES/2, COLS/2, "hello world");

    getch();

    endwin();

    return 0;
    
}