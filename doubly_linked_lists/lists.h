#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list node
 * @n: integer stored in the node
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
void free_dlistint(dlistint_t *head);
size_t print_dlistint(const dlistint_t *h);
/* other function prototypes if needed */

#endif /* LISTS_H */
