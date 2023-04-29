#include "lists.h"

/**
 * print_listint -> func of print liste
 * @h: pointre for start
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
size_t noudes = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
noudes++;
}
return (noudes);
}
