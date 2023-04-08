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

si = 1;
d = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
si *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
d = (d * 10) + (s[i] - '0');
}
else if (d > 0)
break;
}
return (d *si);
}

/**
 * main -> Program
 *
 * @argc: Size array argv
 * @argv: Array of size argc
 *
 * Return: Depend Condition
 */

int main(int argc, char **argv)
{
int a;
int b;
int m;

if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
a = _atoi(argv[1]);
b = _atoi(argv[2]);
m = a *b;
printf("%d\n", m);
return (0);
}
