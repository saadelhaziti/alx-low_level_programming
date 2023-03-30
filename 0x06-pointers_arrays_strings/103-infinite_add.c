#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result, or 0 if the result can not be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, i, j;
char *p1 = n1, *p2 = n2;
while (*p1++)
len1++;
while (*p2++)
len2++;
if (len1 > size_r || len2 > size_r)
return (0);
p1 = n1 + len1 - 1;
p2 = n2 + len2 - 1;
for (i = 0; i < size_r - 1; i++)
{
int digit1 = i < len1 ? *(p1 - i) - '0' : 0;
int digit2 = i < len2 ? *(p2 - i) - '0' : 0;
int sum = digit1 + digit2 + carry;
if (sum > 9)
{
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}
r[i] = sum + '0';
}
if (carry)
{
return (0);
}
else
{
r[i] = '\0';
for (i = 0, j = size_r - 2; i < j; i++, j--)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
} return (r);
}
}
