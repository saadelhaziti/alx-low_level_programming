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
int i;
int j;
int o;
int n;
int sum;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
}
}
sum = 0;
for (o = 1; o < argc; o++)
{
n = _atoi(argv[o]);
if (n >= 0)
sum += n;
}
printf("%d\n", sum);
return (0);
}
