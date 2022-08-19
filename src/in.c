#include "definitions.h"


str input(WINDOW *enter)
{
    //sets up the vars for this function
    str string;
    string.allocated = 50;
    string.length = 0;
    string.string = calloc( string.allocated,sizeof(char));
    char tmp = 0;
    int x = 0, y = 0;
    getyx(enter,y,x);
    while(0x0a != (tmp = wgetch(enter)))
    {
        /*string is a struct and the .string element is a char *
         * string.allocated is the part of the struct that says how many bytes are allocated to it while the .length is how long it is
         */
        if(string.allocated - 1 == string.length)
        {
            string.string = realloc(string.string, string.allocated += 50);
        }
        //0x7F is the backspace
        //we place the new char and then when add the new char to the string and move the and set it up to read the next byte
        if(tmp != 0x7F)
        {
            mvwaddch(enter,y,x,tmp);
            string.string[string.length] = tmp;
            string.length++;
            x++;

        }
        //does the opasite, decraments the length and x and then puts a space in the previous slout covering up the now deleted char.
        //the string length becoming 0 means that is the new end of the string
        //And then we home back a slot
        else
        {
            if(string.length != 0)
            {
                string.length--;
                x--;
                string.string[string.length] = 0;
                mvwaddch(enter,y,x,' ');
                wmove(enter,y,x);
            }
        }
    }

    return string;
}
