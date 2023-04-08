#include <stdio.h>

/**
 * _atoi -> Convert string to integer
 *
 * @s: Input
 *
 * Return: Integer Converted
 */

int _atoi(char *s)
{
int i;
int si;
unsigned int d;

i = 0;
si = 1;
d = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
si *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
d = (d * 10) + (s[i] - '0');
}
else if (d > 0)
break;
i++;
}
return (d *si);
}

/**
 * main -> Program
 *
 * @argc: Size array argv
 * @argv: Array of size argc
 *
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
int i;
int l;
int n;
int c[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
n = _atoi(argv[1]);
if (n < 0)
{
printf("0\n");
return (0);
}
l = 0;
for (i = 0; i < 5 && n >= 0; i++)
{
while (n >= c[i])
{
l++;
n -= c[i];
}
}

printf("%d\n", l);
return (0);
}
