#include "main.h"

/**
 * _strlen ->  Length of a string
 *
 * @s: Input
 *
 * Return: The length
 */

int _strlen(char *s)
{
if (*s == '\0')
return (0);
s++;
return (_strlen(s) + 1);
}

/**
 * _compare -> Compare
 *
 * @s: Inpute String
 * @fin: String Length
 *
 * Return: Depend Condition
 */

int _compare(char *s, int fin)
{
if (fin < 1)
return (1);
if (*s == *(s + fin))
{
s++;
fin -= 2;
return (_compare(s, fin));
}
return (0);
}

/**
 * is_palindrome -> Palindrome string
 *
 * @s: Inpute String
 *
 * Return: Depend Condition
 */

int is_palindrome(char *s)
{
int fin;

fin = _strlen(s) - 1;
return (_compare(s, fin));
}
