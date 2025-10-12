#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include "lists.h"
#include "lists.h"
#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;
    dlistint_t *node;

    /* Add some nodes */
    add_dnodeint_end(&head, 10);
    add_dnodeint_end(&head, 20);
    add_dnodeint_end(&head, 30);
    add_dnodeint_end(&head, 40);

    /* Print the list */
    print_dlistint(head);

    /* Get node at index 2 (should be 30) */
    node = get_dnodeint_at_index(head, 2);
    if (node)
        printf("Node at index 2: %d\n", node->n);
    else
        printf("Node at index 2 not found\n");

    /* Get node at index 5 (should be NULL) */
    node = get_dnodeint_at_index(head, 5);
    if (node)
        printf("Node at index 5: %d\n", node->n);
    else
        printf("Node at index 5 not found\n");

    /* Free the list */
    free_dlistint(head);

    return (0);
}
