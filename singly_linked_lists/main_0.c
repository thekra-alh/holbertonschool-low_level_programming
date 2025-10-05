#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for add_node
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head = NULL;
	list_t *ptr;
	const char *strings[] = {
		"Alexandro", "Asaia", "Augustin", "Bennett", "Bilal",
		"Chandler", "Damian", "Daniel", "Dora", "Electra",
		"Gloria", "Joe", "John", "John", "Josquin",
		"Kris", "Marine", "Mason", "Praylin", "Rick",
		"Rick", "Rona", "Siphan", "Sravanthi", "Steven",
		"Tasneem", "William", "Zee"
	};
	int i;

	for (i = 0; i < 28; i++)
	{
		ptr = add_node(&head, strings[i]);
		if (ptr == NULL)
		{
			printf("Failed to add node\n");
			return (1);
		}
	}

	print_list(head);

	return (0);
}
