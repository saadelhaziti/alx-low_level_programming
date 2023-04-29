#include "lists.h"

/**
 * add_nodeint -> func of add liste
 * @head: double pointre for start
 * @n: intger
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_noude;

new_noude = (listint_t *)malloc(sizeof(listint_t));
if (new_noude == NULL)
{
return (NULL);
}
new_noude->n = n;
new_noude->next = *head;
*head = new_noude;
return (*head);
}
