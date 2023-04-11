#include <stdlib.h>
#include "main.h"

/**
 * *argstostr -> Concatenates all the arguments of your program
 *
 * @ac: Input Arg
 * @av: Input String
 *
 * Return: Depend Condition
 */

char *argstostr(int ac, char **av)
{
int a;
int b;
int k;
int size;
char *new;

if (ac == 0 || av == NULL)
return (NULL);
size = ac;
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
size++;
}
}
new = malloc(size + 1 * sizeof(char));
if (new == NULL)
return (NULL);
k = 0;
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
new[k] = av[a][b];
k++;
}
new[k] = '\n';
k++;
}
return (new);
}
