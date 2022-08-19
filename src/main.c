#include "definitions.h"

//defining variables
int y,x;
int down = 10;
bool run = true;
int tmp = 0;
//enabled is for the help message that happens every five cycles of the loop.
int main(void)
{
    initscr();
    getmaxyx(stdscr,y,x);
    //str input;
    str in;
    noecho();
    cbreak();
    //sets up the window
    WINDOW *window = newwin(y-1,x-1,0,0);
    //that window where you text goes when you put it on the screen
    WINDOW *enter = newwin(3,x/2,y - 6,x/4);
    //re is short for refreash in this case and renews the content on the screens
    re();
    //main loop that will
    /*
     * get input
     * parse said input
     * react accordingly
     * repeat
     */
    while(run == true)
    {
        in = input(enter);
        if(in.length != 0)
        {
            mvwprintw(window,down,x/4,"%s",in.string);
            down++;

            tmp = wtd(in,window,&down);
            if(tmp == 2)
            {
                run = false;
            }
        }

        re();
        free(in.string);
    }
    //clean up
    delwin(window);
    delwin(enter);
    window = NULL;
    enter = NULL;
    endwin();
    printf("\n");

    return 0;
}
