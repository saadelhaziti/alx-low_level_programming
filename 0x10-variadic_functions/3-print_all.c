#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * _string-> print string
 * @var: Args list
*/

void p_string(va_list var)
{
char *str;

str = va_arg(var, char *);
if (str != NULL)
{
printf("%s", str);
return;
}
printf("(nil)");
}

/**
 * _float-> print float
 * @var: Args list
*/

void _float(va_list var)
{
float x;

x = va_arg(var, double);
printf("%f", x);
}

/**
 * _int-> print int
 * @var: Args list
*/

void _int(va_list var)
{
int x;

x = va_arg(var, int);
printf("%d", x);
}

/**
 * _char-> print char
 * @var: Args list
*/

void _char(va_list var)
{
char x;

x = va_arg(var, int);
printf("%c", x);
}

/**
 * print_all -> Prints anything.
 * @format: Args list
 */

void print_all(const char * const format, ...)
{
int i; 
int j;
char *spechlle = "";
va_list args;

string func[] = {
{"c", _char}, {"i", _int}, {"f", _float}, {"s", p_string}
};

va_start(args, format);
i = 0;
while (format && (*(format + i)))
{
j = 0;
while (j < 4 && (*(format +i) != *(func[j].str)))
{
j++;
}
if (j < 4)
{
printf("%s", spechlle);
func[j].point(args);
spechlle = ", ";
}
i++;
}
printf("\n");
va_end(args);
}
