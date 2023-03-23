#include"main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				putchar(i / 10 + '0');
			}
			putchar(i % 10 + '0');
		}
		j++;
		putchar('\n');
	}
}
