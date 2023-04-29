#include "lists.h"

/**
 * add_nodeint_end -> func of add liste
 * @head: double pointre for start
 * @n: intger
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *p;
listint_t *new_noude;

p = *head;
new_noude = (listint_t *)malloc(sizeof(listint_t));

if (new_noude == NULL)
{
return (NULL);
}

new_noude->n = n;
new_noude->next = NULL;

if (*head == NULL)
{
*head = new_noude;
return (new_noude);
}
while (p->next != NULL)
{
p = p->next;
}
p->next = new_noude;
return (*head);
}
