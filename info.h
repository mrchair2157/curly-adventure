#ifndef __info_h__
#define __info_h__

//this file is for information that is too large to reasonable fit cleanly in main.c
#include <stdbool.h>
#include <stdio.h>
void MathModePrint() {
    printf("Math mode (when on) will set your first number to the answer of your previous number kinda like online calculator\n");
    printf("in math mode will will only get to set your first number once\n");
    printf("please enter 1 or 2 for math mode on or off respectively: \n");
}
//this works by getting numbers[0] and it changes up the text
int NumberSelection(bool mode) {
    double x;
    if(mode == false) {
    printf("please enter your first number: \n");
    //after if it goes to the scanf
    }
    else {
    printf("please enter your first number, after this you will only be promoted for a second number: \n");
    }
    //this is if mathmode is on changing it up
    scanf("%lf",&x);
    printf("please enter your second number: \n");
    return x;
    //regardless main.c processes numbers[1]
}

void help() {
    printf("h is for help and this is it.\n"                            );
    printf("q to quite.\n"                                              );
    printf("x is to toggle the Math Mode after selection\n"             );
    printf("n is to change your numbers"                                );
    printf("+ for addition.\n"                                          );
    printf("- for subtraction.\n"                                       );
    printf("* for multiplication.\n"                                    );
    printf("/ for division.\n"                                          );
}
#endif
