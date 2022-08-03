#include "definitions.h"


//no idea how to use a look up table that calls a function
ret_op lookup(char lookup,WINDOW *window,WINDOW *enter,ret_op rt,bool *stop)
{

    int y,x;
    getmaxyx(window,y,x);
switch(lookup)
{

    case 'q':
        *stop = true;
        break;

    case '+':
       rt.numbers[2] = rt.numbers[0] + rt.numbers[1];
       mvwprintw(window,y-7,x/4,"%lf + %lf = %lf",rt.numbers[0],rt.numbers[1],rt.numbers[2]);
       if(rt.optrfl == true)
       {
           rt.numbers[0] = rt.numbers[2];
       }
       wrefresh(window);
       break;

    case '-':
       rt.numbers[2] = rt.numbers[0] - rt.numbers[1];
       mvwprintw(window,y-7,x/4,"%lf - %lf = %lf",rt.numbers[0],rt.numbers[1],rt.numbers[2]);
       if(rt.optrfl == true)
       {
           rt.numbers[0] = rt.numbers[2];
       }
       wrefresh(window);
       break;

    case '*':
       rt.numbers[2] = rt.numbers[0] * rt.numbers[1];
       mvwprintw(window,y-7,x/4,"%lf * %lf = %lf",rt.numbers[0],rt.numbers[1],rt.numbers[2]);
       if(rt.optrfl == true)
       {
           rt.numbers[0] = rt.numbers[2];
       }
       wrefresh(window);
       break;
    case '/':
       rt.numbers[2] = rt.numbers[0] / rt.numbers[1];
       mvwprintw(window,y-7,x/4,"%lf / %lf = %lf",rt.numbers[0],rt.numbers[1],rt.numbers[2]);
       if(rt.optrfl == true)
       {
           rt.numbers[0] = rt.numbers[2];
       }
       wrefresh(window);
       break;
    case '\n':
        wclear(enter);
        wclear(window);
        re();
        break;
    case 'x':
        if(rt.optrfl == true)
        {
            rt.optrfl = false;

        }
        else
        {
            rt.optrfl = true;
        }
        break;

    case 'n':
        rt = newnums(rt,window,enter);
        break;

    case 'h':
    mvwprintw(window,y-15,x/4,"h is for help and this is it."                            );
    mvwprintw(window,y-14,x/4,"q to quite."                                              );
    mvwprintw(window,y-13,x/4,"x is to toggle the Return Operator Mode after selection"  );
    mvwprintw(window,y-12,x/4,"n is to change your numbers"                              );
    mvwprintw(window,y-11,x/4,"+ for addition."                                          );
    mvwprintw(window,y-10,x/4,"- for subtraction."                                       );
    mvwprintw(window,y-9,x/4,"* for multiplication."                                     );
    mvwprintw(window,y-8,x/4,"/ for division."                                           );
    re();
    break;

}

    return rt;
}

