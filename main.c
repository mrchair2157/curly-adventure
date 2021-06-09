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
//math mode is gonna be if the first variable is gonna get charged or if the value gets returened
//read info.h's mathmode function to learn what mathmode does

//proscesses mathmode
mathmode();
scanf("%i",&MathModeSelector);
if(MathModeSelector == 1) {
     MathMode = true;
}
else {
     MathMode = false;
}
Numbers[0] = NumberSelection(mathmode);
scanf("%lf",&Numbers[1]);

//main loop function
printf("h is for help\n");
for(int z = 1;z == 1;) {

//switch for selcteion
scanf("%c1",&operator);    
    if(MathMode == true) {

    
    switch(operator) {
        
        case '+':
        Numbers[2] = addition(Numbers[0],Numbers[1]);
        Numbers[0] = Numbers[2];
        break;
        
        
        }
    }
    
    else {
    
    switch(operator) {

    
        case '+':
        Numbers[2] = addition(Numbers[0],Numbers[1]);
        break;
        }
    
    }

//for the universal switch statmens
switch(operator) {
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
    
    case 'q':
    return 0;

    case 'h':
    help();
    x = -1;
    break;
}
//after 5 trys if help is needed then it will give them the help option
//note make it toggleable with the defuilt of being on, done :^)

if(x == 5  && enabled == true ) {
        printf("enter h for help\n"                     );
        printf("z to togle this message.\n"             );
        x = 0;
        }
    x++;
    } 
return printf("unknow fatal error :^(\n");
}
// 0x3A,0x88,0x28
//may need this code at a later date if things don't work out
