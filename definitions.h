#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_

#define re();                                          \
    {                                                  \
        wmove(enter,1,1);                              \
        box(window,0,0);                               \
        box(enter,0,0);                                \
        wrefresh(window);                              \
        wrefresh(enter);                               \
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
    int numbers[3];
    bool optrfl;
} ret_op;

bool mathmode(char);

void winpoint(WINDOW *);

void help();

int operation(char, double, double);

int lookup(char ,WINDOW*,WINDOW*);


ret_op RETOPS(WINDOW*,WINDOW*);
#endif // DEFINITIONS_H_
