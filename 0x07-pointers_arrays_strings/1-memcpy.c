#include "main.h"

/**
 * *_memcpy -> Copy memory area
 *
 * @dest: Destination
 * @src: Source
 * @n: Numbers
 *
 * Return: Destination dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
