#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_

#define re();                                          \
    {                                                  \
        box(window,0,0);                               \
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
#include "QOL.h"


typedef struct
{

    char retop;
    double numbers[3];
    bool optrfl;
} ret_op;

bool mathmode(char);

void winpoint(WINDOW *);

void help();

int operation(char, double, double);

ret_op lookup(char ,WINDOW*,WINDOW*,ret_op,bool*);


ret_op RETOPS(WINDOW*,WINDOW*);

ret_op newnums(ret_op rt,WINDOW*,WINDOW*);
#endif // DEFINITIONS_H_
