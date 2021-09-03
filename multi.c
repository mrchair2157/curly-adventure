#include "definitions.h"

ret_op RETOPS(WINDOW *win,int y,int x)
{
    ret_op opreturn;
    mvwprintw(win,1,2,"Return Operator Mode (when on) will set your first number to the answer of your previous number.");
    mvwprintw(win,2,2,"in math mode will will only get to set your first number once");
    mvwprintw(win,3,2,"please enter 1 or 2 for math mode on or off respectively: ");
    char tmpc = wgetch(win);
    if(tmpc == '1')
    {
        opreturn.optrfl = true;
    }
    else
    {
        opreturn.optrfl = false;
    }
    wscanw(win,"%c",&opreturn.retop);
    wclear(win);

    scanw("%lf",&opreturn.numbers[1]);
    if(opreturn.optrfl == false) {
        wprintw(win,"please enter your first number: ");

    }
    else
    {
        wprintw(win,"please enter your first number, after this you will only be promoted for a second number: ");
    }
    //this is if mathmode is on changing it up
    wscanw(win,"%lf",opreturn.number[0]);
    wprintw(win,"please enter your second number: ");

    return opreturn;
}

