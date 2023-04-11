#include <stdlib.h>
#include "main.h"

/**
 * *str_concat -> Allocate Space Of s1 + s2
 *
 * @s1: Input First
 * @s2: Input Second
 *
 * Return: Depend Condition
 */

char *str_concat(char *s1, char *s2)
{
int a;
int b;
int k = 0;
int size;
int size1;
int size2;
char *new;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (size1 = 0; s1[size1] != '\0'; size++)
;
for (size2 = 0; s2[size2] != '\0'; size++)
;
size = size1 + size2;
new = (char *) malloc(size + 1 * sizeof(char));
if (new == NULL)
return (NULL);
for (a = 0; s1[a] != '\0'; a++, k++)
{
new[k] = s1[a];
}
for (b = 0; s2[b] != '\0'; b++, k++)
{
new[k] = s2[b];
}
new[k] = '\0';
return (new);
}
