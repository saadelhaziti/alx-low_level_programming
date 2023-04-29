#include "lists.h"

/**
 * free_listint -> func of add liste
 * @head: double pointre for start
 */

void free_listint(listint_t *head)
{
listint_t *p;

while (head != NULL)
{
p = head;
head = head->next;
free(p);
}
}
