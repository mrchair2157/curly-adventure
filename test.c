#include <ncurses.h>

int main(void)
{
    initscr();

    printw("your mom");
    getch();
    endwin();
}
