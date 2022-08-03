#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_

#define re();                                          \
    {                                                  \
        box(window,'#','#');                               \
        box(enter,0,0);                                \
        mvwprintw(window,10,x/4,"%-6lf %-6lf %-6lf",rt.numbers[0],rt.numbers[1],rt.numbers[2]);\
        wmove(enter,1,1);                              \
        wrefresh(window);                              \
        wrefresh(enter);                               \
                                                       \
}
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <ncurses.h>
#include <errno.h>
#include <unistd.h>

#define window win

typedef struct
{

    char retop;
    double numbers[3];
    bool optrfl;
} ret_op;

//info.c

void help();
//info.c

ret_op lookup(char ,WINDOW*,WINDOW*,ret_op,bool*);
//lookup.c


//refacter RETOPS
ret_op RETOPS(WINDOW*,WINDOW*);
//multi.c

ret_op newnums(ret_op rt,WINDOW*,WINDOW*);
//multi.c
#endif // DEFINITIONS_H_
