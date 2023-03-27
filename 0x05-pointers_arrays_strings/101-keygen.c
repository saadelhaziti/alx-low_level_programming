#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
    int rang;
    srand(time(NULL));
    i=0;
    while (i<15)
    {
        rang= rand()%128;
        putchar(rang);
        i++;
    }

    putchar((rang+423)*128);
	return (0);
}