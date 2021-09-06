#include "definitions.h"

#define win window


//defining variables
int y,x;
//enabled is for the help message that happens every five cycles of the loop.
int main(int argc, char **argv)
{
    //makes the complier give less and more usefull warngings
    argc *= 2;
    argv[0] = "SUS";
    bool stop = false;
    ret_op rt;
    initscr();
    getmaxyx(stdscr,y,x);
    //get argv as doubles
    //sets up the window
    cbreak();
    WINDOW *window = newwin(y-1,x-1,0,0);
    WINDOW *enter = newwin(3,x/2,y - 6,x/4);
    //set the window pointer in info.c
    winpoint(win);
    re();
    rt = RETOPS(win,enter);
    re();
    //variable for getchar
    char getch;
    while(stop == false)
    {
        getch = wgetch(enter);
        rt = lookup(getch,win,enter,rt,&stop);
        re();
    }

    endwin();
    printf("\n");
    return 0;
}





//unused
/*

        switch(operator)
        {

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
