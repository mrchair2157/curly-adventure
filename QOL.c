#include "QOL.h"
// RevStr and StrIn are from / based off of some of jacob Sorber
void *RevStr(char *str)
{

    char *end = str+strlen(str)- 1;
    while(end > str)
    {
        char temp = *str;

        *str = *end;
        *end = temp;
        end--;
        str++;

    }
}


char *StrIn(FILE *stream)
{
    int bytes = 0;
    int tracked = 0;
    char *buf = NULL;
    char c;
    while((c = fgetc(stream)) != EOF)
    {
        bytes++;
        if(bytes == tracked)
        {
            if(tracked == 0)
            {
            tracked += 1;
            }
            tracked *= 100;
        }
        buf = realloc(buf, bytes + tracked);


        buf[bytes-1] = c;
    }
    buf[bytes] = 0;
    return buf;

}
