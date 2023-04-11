#include "main.h"
#include <stdlib.h>

/**
 * *create_array ->Create array
 *
 * @size: Input Array
 * @c: Input String
 *
 * Return: Depend Condition
 */
char *create_array(unsigned int size, char c)
{
char *tab;
unsigned int i;

if (size == 0)
return (NULL);
tab = (char *) malloc(size * sizeof(char));
if (tab == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
tab[i] = c;
}
return (tab);
}
