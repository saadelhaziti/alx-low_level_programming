#include "main.h"

/**
 * _strspn -> Gets the length of a prefix substring
 *
 * @s: Input
 * @accept: Input
 *
 * Return: Depend Condition
 */

unsigned int _strspn(char *s, char *accept)
{
int x;
int y;
unsigned int oct;

oct = 0;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] != ' ')
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[y] == accept[y])
oct++;
}
}
else
return (oct);
}
return (oct);
}
