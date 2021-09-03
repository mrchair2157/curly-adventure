#include "definitions.h"

#define win window

//no idea how to use a look up table that calls a function
int lookup(char lookup,WINDOW *win,WINDOW *enter)
{
    int y,x;
    getmaxyx(win,y,x);
switch(lookup)
{









    case 'q':
        return 0;
        break;
    case 'c':
        wclear(win);
        wclear(enter);
        break;

}





    return -1;
}

