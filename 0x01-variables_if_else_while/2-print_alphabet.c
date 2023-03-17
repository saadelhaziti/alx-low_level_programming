#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int i;
        char alpha[]="abcdefghijklmnopqrstuvwxyz";
        for (i = 0; i < strlen(alpha); i++)
        {
            putchar(alpha[i]);
        }
        putchar('\n');
        return (0);
}

