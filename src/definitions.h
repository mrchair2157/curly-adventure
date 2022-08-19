#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_
//refreshes everything
#define re();                                          \
    {                                                  \
        wclear(enter);                                 \
        box(window,'#','#');                           \
        box(enter,0,0);                                \
        wmove(enter,1,1);                              \
        wrefresh(window);                              \
        wrefresh(enter);                               \
                                                       \
}

//mvwprintw(window,10,x/4,"%-6lf %-6lf %-6lf",rt.numbers[0],rt.numbers[1],rt.numbers[2]);
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <ncurses.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

#define win WINDOW

typedef struct
{

    char retop;
    double numbers[3];
    bool optrfl;
} ret_op;

typedef struct
{
    char *string;
    unsigned int allocated;
    unsigned int length;
} str;
//info.c

void help();
//info.c

ret_op lookup(char ,win*,win*,ret_op,bool*);
//lookup.c


//refacter RETOPS
ret_op RETOPS(win*,win*);
//multi.c

ret_op newnums(ret_op rt,win*,win*);
//multi.c
int wtd(str,win*,int*);
//multi.c
/*
 * takes the string and sees if there is a keyword to exectue like quit to quit
 */

str input(win*);
//in.c
#endif // DEFINITIONS_H_
