#include <stdio.h>
#include <stdbool.h>
#include "info.h"
#include "basic.h"

//defining variables
int x = 0;
char operator;
short int MathModeSelector;
long double a = 12,b = 6,c;
bool MathMode;
int main() {


//math mode is gonna be if the first variable is gonna get charged or if the value gets returened
printf("enter a math mode of 1 or 2\n");
scanf("%i",&MathModeSelector);
if(MathModeSelector != 1) {
     MathMode = false;
}
else {
     MathMode = true;
}

printf("debug %i %i %i %i %i\n",MathMode, MathModeSelector,a,b,c);

for(int z = 1;z == 1;) {

//switch for selcteion
scanf("%c",&operator);    
    if(MathMode == true) {

    
    switch(operator) {
        
        case 'h':
        help();
        x = 0;
        break;    
        
        case '+':
        addition(a,b);
        printf("%lf",c);
        break;
        case 'q':
        return 0;

        }
    }
    else {
        switch(operator) {
        
        case 'h':
        help();
        x = 0;
        break;    
        
        case '+':
        addition(12,16);
        printf("%lf",c);
        c == a;
        break;
        case 'q':
        return 0;
    }        
//after 5 trys if help is needed then it will give them the help option
//note make it toggleable with the defuilt of being on
    
    }
if(x == 5  /*&& enabled == true */) {
        printf("enter h for help\n");
        x = 0;
        }
    x++;
    }
return printf("fatal error");
}