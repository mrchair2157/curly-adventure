#include <stdio.h>
#include "info.h"
int x = 0;
char operator;
int main() {

for(int z = 1;z == 1;) {
printf("%d\n",x);
scanf("%c",&operator);    
    switch(operator) {
        
        case 'h':
        help();
        x--;
        break;    
        
        case 'q':
        return 0;

    }
x++;    
if(x == 5) {
    printf("enter h for help\n");
    x = 0;
    }
}
return 0;
}

