//this file is for information that is too large to reasonable fit cleanly in main.c
#include <stdio.h>
int MathModePrint() {
    printf("Math mode (when on) will set your first number to the answer of your previous number kinda like online calculator\n");
    printf("in math mode will will only get to set your first number once\n");
    printf("please enter 1 or 2 for math mode on or off respectively: \n");
}
int NumberSelection(bool mode) {
    double x;
    if(mode == false) {
    printf("please enter your first number: \n");
    
    }
    else {
    printf("please enter your first number, after this you will only be promoted for a second number: \n");
    }
    scanf("%lf",&x);
    printf("please enter your second number: \n");
    return x;
}

int help() {
    printf("h is for help and this is it.\n"                            );
    printf("q to quite.\n"                                              );
    printf("x is to toggle the Math Mode after selection\n"             );
    printf("n is to change your numbers"                                );
    printf("+ for addition.\n"                                          );
    printf("- for subtraction.\n"                                       );
    printf("* for multiplication.\n"                                    );
    printf("/ for division.\n"                                          );
}
