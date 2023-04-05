#include "main.h"

/**
 * _pow_recursion -> The power of int
 *
 * @x: Input Number
 * @y: Power Of Number
 *
 * Return: Depend Condition
 */

int _pow_recursion(int x, int y)
{
int n = 0;

if (y < 0)
return (-1);
if (y == 0)
return (1);
y--;
n = x * _pow_recursion(x, y);
return (n);
}
