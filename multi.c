#include "definitions.h"

ret_op RETOPS(WINDOW *window,WINDOW *enter)
{
    int y,x;
    getmaxyx(window,y,x);
    ret_op opreturn;
    mvwprintw(window,y-9,x/4,"Return Operator Mode (when on) will set your first number to the answer of your previous number.");
    mvwprintw(window,y-8,x/4,"in math mode will will only get to set your first number once");
    mvwprintw(window,y-7,x/4,"please enter 1 or 2 for math mode on or off respectively: ");
    re();
    wmove(enter,1,1);
    char tmpc = wgetch(enter);
    if(tmpc == '1')
    {
        opreturn.optrfl = true;
    }
    else
    {
        opreturn.optrfl = false;
    }
    wclear(window);
    wclear(enter);
    box(enter,0,0);
    if(opreturn.optrfl == false) {
        mvwprintw(window,y - 7,x/4,"please enter your first number: ");
        re();
        mvwscanw(enter,1,1,"%lf",&opreturn.numbers[0]);

    }
    else
    {
        mvwprintw(window,y - 7,x/4,"please enter your first number, after this you will only be promoted for a second number: ");
        re();
        mvwscanw(enter,1,1,"%lf",&opreturn.numbers[0]);
    }
    //this is if mathmode is on changing it up
    mvwprintw(window,y - 7,x / 4,"please enter your second number: ");
    re();
    wscanw(enter,"%lf",&opreturn.numbers[1]);

    return opreturn;
}

