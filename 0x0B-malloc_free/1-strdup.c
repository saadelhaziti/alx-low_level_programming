#include <stdlib.h>
#include "main.h"

/**
 * *_strdup -> Newly allocated space in memory
 *
 * @str: Input String
 *
 * Return: Depend Condition
 */

char *_strdup(char *str)
{
int i;
int size;
char *pf;

if (str == NULL)
return (NULL);
size = 0;
while (str[size] != '\0')
{
size++;
}
pf = (char *) malloc(size + 1 * sizeof(char));
if (pf == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
pf[i] = str[i];
}
pf[i] = '\0';
return (pf);
}
