#include "definitions.h"

ret_op RETOPS(WINDOW *window,WINDOW *enter)
{
    int y,x;
    getmaxyx(window,y,x);
    ret_op rt;
    mvwprintw(window,y-9,x/4,"Return Operator Mode (when on) will set your first number to the answer of you previous equation.");
    mvwprintw(window,y-8,x/4,"in Return Operator Mode will only get to set your first number once");
    mvwprintw(window,y-7,x/4,"please enter 1 or 2 for math mode on or off respectively: ");
    re();
    wmove(enter,1,1);
    char tmpc = wgetch(enter);
    wclear(window);
    wclear(enter);
    if(tmpc == '1')
    {
        rt.optrfl = true;
    }
    else
    {
        rt.optrfl = false;
    }
    re();
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
