#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid -> 2 dimensional array of integers
 *
 * @width: Input Gird With
 * @height: Input Gird Height
 *
 * Return: Depend Condition
 */

int **alloc_grid(int width, int height)
{
int i;
int j;
int **poit;

if (width <= 0 || height <= 0)
return (NULL);
poit = (int **) malloc(height * sizeof(int *));
if (poit == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
poit[i] = (int *) malloc(width * sizeof(int));
if (poit[i] == NULL)
{
for (; i >= 0; i--)
{
free(poit[i]);
}
free(poit);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
poit[j][j] = 0;
}
}
return (poit);
}