#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <ncurses.h>
#include <errno.h>
#include "definitions.h"

int operation(char operator,double n1,double n2)
{
    double n3;
    switch (operator)
    {
    case '+':
       n3 = n1 + n2;
       break;
    case '-':
       n3 = n1 - n2;
       break;
     case '*':
       n3 = n1 * n2;
       return n3;
     case '/':
       n3 = n1 / n2;
       break;

            }

       return n3;
}
