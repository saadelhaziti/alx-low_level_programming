#include <stdio.h>
/**
 * main - prints all possible combos of two two-digits.
 *
 * Return: 0
*/
int main(void)
{
int a = 0, b = 1;

while (a < 100)
{
	while (b < 100)
	{
		putchar(a / 10 + '0');
		putchar(a % 10 + '0');
		putchar(' ');
		putchar(b / 10 + '0');
		putchar(b % 10 + '0');
		if (a != 98 || b != 99)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	a++;
	b = a + 1;
}
putchar('\n');
return (0);
}
