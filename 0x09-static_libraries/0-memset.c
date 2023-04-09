#include "main.h"

/**
 * *_memset -> Fill memory with a constant byte
 *
 * @s: Memory Area
 * @b: Value
 * @n: Byte Numbers
 *
 * Return: Pointer Memory Area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

x = 0;
while (x < n)
{
s[x] = b;
x++;
}

	return (s);
}
