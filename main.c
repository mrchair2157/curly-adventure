#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <ncurses.h>
#include <errno.h>
#include "definitions.h"

#define win window


//defining variables
int x = 0;
double Numbers[3] = {0,0,0};
char operator;
char ReturnOperatorModeSelector;
int y,x;
//enabled is for the help message that happens every five cycles of the loop.
bool ReturnOperatorModeState;
bool enabled = true;
int main(int argc, char **argv)
{
    //get argv as ints

    //sets up the window
    initscr();
    cbreak();
    getmaxyx(stdscr,y,x);
    WINDOW *window = newwin(y-3,x-3,0,0);
    WINDOW *enter = newwin(y-5,5,0,0);
    //set the window pointer in info.c
    winpoint(win);
    box(enter,0,0);
    box(win,0,0);
    getch();
    ret_op rt;
  //rt = RETOPS(win,y,x);
    wclear(win);
    //variable for getchar
    char *getch;
    while(1)
    {
        box(win,0,0);
        wrefresh(win);
        getch = wgetch(win);
        wprintw(win,"%c",getch);





        if(0 == lookup(getch,win))
        {

            free(getch);
            endwin();
            return 0;
        }
        wclear(win);
    }
}





//unused


//math mode is gonna be if the first variable is gonna get charged or if the value gets returned
//read info.h's mathmode function to learn what mathmode does

//processes mathmode



/*    ReturnOperatorModePrint();
    ReturnOperatorModeSelector = getchar();
    if(ReturnOperatorModeSelector == 1)
    {
        ReturnOperatorMode = true;
    }
    else
    {
        ReturnOperatorMode = false;
    }
    Numbers[0] = NumberSelection(ReturnOperatorMode);
    scanf("%lf",&Numbers[1]);

//main loop function
    printf("h is for help\n");
    for(int z = 1;z == 1;)
    {

//switch for selection
        scanf("%c",&operator);
//makes sure there is a mathmatical operator
        if(operator == 0x2B || operator == 0x2D || operator == 0x2A || operator == 0x2F)
        {
            if(ReturnOperatorMode == true)
            {

                Numbers[2] = operation(operator,Numbers[0],Numbers[1]);
                printf("%lf %c %lf = %lf\n",Numbers[0],operator,Numbers[1],Numbers[2]);
                Numbers[0] = Numbers[2];
            }
            else
            {
                Numbers[2]= operation(operator,Numbers[0],Numbers[1]);
                printf("%lf %c %lf = %lf\n",Numbers[0],operator,Numbers[1],Numbers[2]);
            }
        }
//for the universal switch statements, quite, help, toggles,and number selection
        switch(operator)
        {
            case 'h':
                help();
                x = -1;
                break;


            case 'q':
                return 0;

            case 'n':
                if(ReturnOperatorMode == true)
                {
                    printf("please enter a number\n");
                    scanf("%lf",&Numbers[1]);
                }
                else
                {
                    printf("please enter number your first number\n");
                    scanf("%lf",&Numbers[0]);
                    printf("please enter your second number\n");
                    scanf("%lf",&Numbers[1]);
                }
                break;

            case 'p':
                printf("number 1 %lf\n",Numbers[0]);
                printf("number 2 %lf\n",Numbers[1]);
                printf("lastest answer is %lf\n",Numbers[2]);
                break;
            case 'x':
                if(ReturnOperatorMode == true)
                {
                    ReturnOperatorMode = false;

                }
                else
                {
                    ReturnOperatorMode = true;
                }

                break;

            case 'z':
                if(enabled == true) {
                    enabled = false;

                }
                else
                {
                    enabled = true;
                }

                break;
                operator = 0;
        }
//after 5 tries if help is needed then it will give them the help option
//note make it toggleable with the default of being on, done :^)

        if(x == 10  && enabled == true )
        {
            printf("enter h for help\n"                     );
            printf("z to toggle this message.\n"             );
            x = 0;
        }
        x++;
    } 

    return printf("unknown fatal error :^(\n");
}
*/
