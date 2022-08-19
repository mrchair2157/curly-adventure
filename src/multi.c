#include "definitions.h"
#include <curses.h>
//refacter RETOPS
//nah bro get rid of it lol
ret_op RETOPS(WINDOW *window,WINDOW *enter)
{
    ret_op rt;
    //betetr soultion needed to replace mathmode
    //pares the input as an equation
    int y,x;
    getmaxyx(window,y,x);
    rt.optrfl = false;
    if(rt.optrfl == false) {
        mvwprintw(window,y - 7,x/4,"please enter your first number: ");
        re();
        mvwscanw(enter,1,1,"%lf",&rt.numbers[0]);

    }
    else
    {
        mvwprintw(window,y - 7,x/4,"please enter your first number, after this you will only be promoted for a second number: ");
        re();
        mvwscanw(enter,1,1,"%lf",&rt.numbers[0]);
    }
    //this is if mathmode is on changing it up
    wclear(window);
    wclear(enter);
    mvwprintw(window,y - 7,x / 4,"please enter your second number: ");
    re();
    wscanw(enter,"%lf",&rt.numbers[1]);
    wclear(window);
    wclear(enter);
    return rt;
}

ret_op newnums(ret_op rt,WINDOW *window, WINDOW *enter)
{
    int y,x;
    getmaxyx(window,y,x);
    if(rt.optrfl == false)
    {
                mvwprintw(window,y-9,x/4,"Enter your first number");
                re();
                mvwscanw(enter,1,1,"%lf",&rt.numbers[0]);
                wclear(window);
                wclear(enter);
    }
    else
    {
        mvwprintw(window,y-8,x/4,"Enter your Number");
        re();
        mvwscanw(enter,1,1,"%lf",&rt.numbers[1]);
        wclear(window);
        wclear(enter);
        re();
        return rt;

    }

    mvwprintw(window,y-8,x/4,"Enter your second number");
    re();
    mvwscanw(enter,1,1,"%lf",&rt.numbers[0]);
    re();
    wclear(window);
    wclear(enter);

    return rt;
}


int wtd(str input, win *window,int *down)
{
    if( 'c' == *input.string )
    {
        if(strcmp("clear",input.string) == 0)
        {
            *down = 10;
            wclear(window);
            return 1;
        }
    }

    if( 'q' == *input.string )
    {
        if(strcmp("quit",input.string) == 0)
        {
            return 2;
        }
    }

    if(*down >= 15)
    {
        *down = 10;
        wclear(window);
    }

    return 0;
}
