#include "definitions.h"

#define win window

//no idea how to use a look up table that calls a function
int lookup(char lookup,WINDOW *win)
{
switch(lookup)
{









    case 'q':
        return 0;
        break;
    case '+':
        echo();
        wrefresh(win);
        break;
}





    return -1;
}
