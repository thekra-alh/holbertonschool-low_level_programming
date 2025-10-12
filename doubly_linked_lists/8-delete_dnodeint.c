#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the list
 * @index: The index of the node to delete (starts at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	/* Delete head node */
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	/* Traverse to node at index */
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	/* If node doesn’t exist */
	if (tmp == NULL)
		return (-1);

	/* Adjust links and delete node */
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;

	free(tmp);
	return (1);
}
