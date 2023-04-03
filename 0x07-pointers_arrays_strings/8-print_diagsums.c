#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -> Prints the sum of the two diagonals
 *
 * @a: Input String
 * @size: Input Size
 */

void print_diagsums(int *a, int size)
{
int i;
unsigned int add;
unsigned int somme;

add = 0;
somme = 0;
for (i = 0; i < size; i++)
{
add += a[(size * i) + i];
somme += a[(size * (i + 1)) - (i + 1)];
}

printf("%d, %d\n", add, somme);
}
