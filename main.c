#include <stdio.h>
#include <stdbool.h>
#include "info.h"
#include "basic.h"


//defining variables
int x = 0;
double Numbers[3] = {0,0,0};
char operator;
short int MathModeSelector;

//enabled is for the help message that happens every five cycles of the loop.
bool MathMode;
bool enabled = true;
int main() {
//math mode is gonna be if the first variable is gonna get charged or if the value gets returned
//read info.h's mathmode function to learn what mathmode does

//processes mathmode
MathModePrint();
scanf("%i",&MathModeSelector);
if(MathModeSelector == 1) {
     MathMode = true;
}
else {
     MathMode = false;
}
Numbers[0] = NumberSelection(MathMode);
scanf("%lf",&Numbers[1]);

//main loop function
printf("h is for help\n");
for(int z = 1;z == 1;) {

//switch for selection
scanf("%c",&operator);    
    if(MathMode == true) {

    
    switch(operator) {
        
        case '+':
        Numbers[0] = addition(Numbers[0],Numbers[1]);
        break;
        
        case '-':
        Numbers[0] = subtraction(Numbers[0],Numbers[1]);
        break;

        case '*':
        Numbers[0] = multiplication(Numbers[0],Numbers[1]);
        break;
 
        case '/':
        Numbers[0] = division(Numbers[0],Numbers[1]);
        break;

        }
    }
    
    else {
    
    switch(operator) {

    
        case '+':
        addition(Numbers[0],Numbers[1]);
        break;


        case '-':
        subtraction(Numbers[0],Numbers[1]);
        break;

        case '*':
        multiplication(Numbers[0],Numbers[1]);
        break;
 
        case '/':
        division(Numbers[0],Numbers[1]);
        break;
       }
    
    }

//for the universal switch statements, quite, help, toggles,and number selection
switch(operator) {
    case 'h':
        help();
        x = -1;
        break;
    
    
    case 'q':
    return 0;
    
    case 'n':
    if(MathMode == true) {
        printf("please enter a number\n");
        scanf("%lf",&Numbers[1]);
    }
    else {
        printf("please enter number your first number\n");
        scanf("%lf",&Numbers[0]);
	printf("please enter your second number\n");
	scanf("%lf",&Numbers[1]);
    }
    break;
    
    case 'x':
    if(MathMode == true) {
        MathMode = false;
        
    }
    else {
        MathMode = true;
    }
    
    break;
    
    case 'z':
    if(enabled == true) {
        enabled = false;
        
    }
    else {
        enabled = true;
    }
    
    break;    
}
//after 5 tries if help is needed then it will give them the help option
//note make it toggleable with the default of being on, done :^)

if(x == 10  && enabled == true ) {
        printf("enter h for help\n"                     );
        printf("z to toggle this message.\n"             );
        x = 0;
        }
    x++;
    } 
return printf("unknown fatal error :^(\n");
}
// 0x3A,0x88,0x28
//may need this code at a later date if things don't work out
