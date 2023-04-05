#include "main.h"

/**
 * wildcmp -> Compare string
 *
 * @s1: First Input
 * @s2: Scond Input
 *
 * Return: Depend Condition
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0') {
return 1;
}
if (*s2 == '*') {
if (wildcmp(s1, s2+1) == 1) {
return 1;
}
while (*s1 != '\0') {
if (wildcmp(s1+1, s2) == 1) {
return 1;
}
s1++;
}
return 0;
}
if (*s1 == *s2) {
return wildcmp(s1+1, s2+1);
}
return 0;
}
