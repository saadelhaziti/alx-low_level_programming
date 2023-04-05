#include "main.h"

/**
 * _sqrt -> Square root of a number
 *
 * @x: Input Number
 * @i: Parameter
 *
 * Return: Depend Condition
 */

int _sqrt(int x, int i)
{
int nb = 0;

if (x < 0 || i * i > x)
return (-1);
if (i * i == x)
return (i);
i++;
nb = _sqrt(x, i);
return (nb);
}

/**
 * _sqrt_recursion -> Square main
 *
 * @n: Input Number
 *
 * Return: Square
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
