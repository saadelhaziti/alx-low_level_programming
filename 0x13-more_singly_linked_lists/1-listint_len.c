#include "lists.h"

/**
 * listint_len -> func of print liste
 * @h: pointre for start
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
size_t noudes = 0;

while (h != NULL)
{
h = h->next;
noudes++;
}
return (noudes);
}
