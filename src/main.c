#include "definitions.h"


//defining variables
int y,x;
//enabled is for the help message that happens every five cycles of the loop.
int main(int argc, char **argv)
{
    //makes the complier give less and more usefull warngings

    bool stop = false;
    ret_op rt;
    initscr();
    getmaxyx(stdscr,y,x);
    //get argv as doubles
    //sets up the window
    cbreak();
    //everything else
    WINDOW *window = newwin(y-1,x-1,0,0);
    //that window where you text goes when you put it on the screen
    WINDOW *enter = newwin(3,x/2,y - 6,x/4);
    re();
    if(argc >= 3)
    {
        rt.numbers[0] = strtod(argv[1],argv+3);
        rt.numbers[1] = strtod(argv[2],argv+4);
    }
    else
    {
    rt = RETOPS(win,enter);
    }
    re();
    //variable for getchar
    char getch;
    while(stop == false)
    {
        getch = wgetch(enter);
        rt = lookup(getch,win,enter,rt,&stop);
        re();
    }

    endwin();
    printf("\n");
    return 0;
}
