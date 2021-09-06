#include "definitions.h"

#define win window
//this file is for information that is too large to reasonable fit cleanly in main.c
WINDOW *window;

void winpoint(WINDOW *tmp)
{
    win = tmp;
}

//this works by getting numbers[0] and it changes up the text
    //regardless main.c processes numbers[1]

void help()
{
}
