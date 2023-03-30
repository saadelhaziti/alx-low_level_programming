#include "main.h"

/**
 * reverse_array -> Reverses the content of an array of integers
 *
 * @a: Input Array
 * @n: Input Number
 */


void reverse_array(int *a, int n)
{
int i;
int j;
int swap;

if (n % 2 != 0)
{
n = n - 1;
}
i = 0;
j = n;
while (i <= (n / 2) || j >= (n / 2))
{
swap = a[i];
a[i] = a[j];
a[j] = swap;
i++;
j--;
}

}
