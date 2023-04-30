#include "lists.h"

/**
 * pop_listint -> pop_listint
 * @head: list
 * Return: int
*/

int pop_listint(listint_t **head)
{
int n = 0;
listint_t *fre;

fre = (*head);
(*head) = (*head)->next;
n = fre->n;
free(fre);
return (n);
}
