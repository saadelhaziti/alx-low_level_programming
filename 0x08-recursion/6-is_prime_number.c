#include "main.h"

/**
 * _div -> Check Divisible
 *
 * @n: Checked Number
 * @i: Divisor
 *
 * Return: Depend Condition
 */

int _div(int n, int i)
{
int nb = 0;
if (n % i == 0)
return (0);
if (n / 2 == i)
return (1);
i++;
nb = _div(n, i);
return (nb);
}

/**
 * is_prime_number -> Prime numbers
 *
 * @n: Input Integer
 *
 * Return: Depend Condition
 */

int is_prime_number(int n)
{
int i;
int x = 0;

i = 2;
if (n <= 1)
return (0);
if (n >= 2 && n <= 3)
return (1);
x = _div(n, i);
return (x);
}
