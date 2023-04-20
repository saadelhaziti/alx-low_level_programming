#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -> Prints numbers, followed by a new line.
 *
 * @separator: Input String Between Numbers
 * @n: Input Numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;

va_start(list, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, const int));
printf("%s ", separator);
}
putchar('\n');
va_end(list);
}
