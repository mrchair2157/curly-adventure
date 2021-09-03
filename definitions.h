#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <ncurses.h>
#include <errno.h>
#include "definitions.h"


typedef struct
{

    char retop;
    int numbers[2];
    bool optrfl;
} ret_op;

bool mathmode(char);

void winpoint(WINDOW *);

void help();

int operation(char, double, double);

int lookup(char* ,WINDOW*);


ret_op RETOPS(WINDOW*,int,int);

#endif // DEFINITIONS_H_
