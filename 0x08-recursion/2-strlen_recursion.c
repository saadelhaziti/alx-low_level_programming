#include "main.h"

/**
 * _strlen_recursion ->  Length of a string
 *
 * @s: Input
 *
 * Return:  The length
 */

int _strlen_recursion(char *s)
{
int n=0;

if (*s == '\0')
return (0);
s++;
n=_strlen_recursion(s) + 1;
return (n);
}
