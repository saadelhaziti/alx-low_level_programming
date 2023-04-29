#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_t - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */

typedef struct listint_t
{
int n;
struct listint_t *next;
} listint_t;


size_t print_listint(const listint_t *h);

#endif
