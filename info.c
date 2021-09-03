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
    wprintw(win,"h is for help and this is it.\n"                            );
    wprintw(win,"q to quite.\n"                                              );
    wprintw(win,"x is to toggle the Return Operator Mode after selection\n"             );
    wprintw(win,"n is to change your numbers"                                );
    wprintw(win,"+ for addition.\n"                                          );
    wprintw(win,"- for subtraction.\n"                                       );
    wprintw(win,"* for multiplication.\n"                                    );
    wprintw(win,"/ for division.\n"                                          );
}
