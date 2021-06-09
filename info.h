//this file is for information that is too large to reasanable fit cleanly in main.c
#include <stdio.h>
int mathmode() {
    printf("Math mode (when on) will set your first number to the answer of your previous number kinda like online calculator\n");
    printf("in math mode will will only get to set your first number once\n");
    printf("please enter 1 or 2 for math mode on or off respectivly: \n");
}
int NumberSelection(bool mode) {
    double x;
    if(mode == false) {
    printf("please enter your first number: \n");
    
    }
    else {
    printf("please enter your first number, after this you will only be promted for a second number: \n");
    }
    scanf("%lf",&x);
    printf("please enter your second number: \n");
    return x;
}

int help() {
    printf("h is for help and this is it.\n"         );
    printf("q to quite.\n"                           );
    printf("x it toggle the Math Mode after selection");
    //printf("- for subraction.\n"                   );
    printf("+ for addition.\n"                       );
    //printf("* for multiplication.\n"               );
    //printf("/ for division.\n"                     );
    //printf("%c for a remainder from a devision.\n",0x25            );
    //printf("a for advanced, coming soon\n"         );
}