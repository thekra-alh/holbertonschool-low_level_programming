#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * update_value - Updates the value of an existing node
 * @node: The node to update
 * @value: The new value
 *
 * Return: 1 on success, 0 on failure
 */
int update_value(hash_node_t *node, const char *value)
{
	free(node->value);
	node->value = strdup(value);
	if (!node->value)
		return (0);
	return (1);
}

/**
 * create_node - Creates a new hash node
 * @key: The key for the node
 * @value: The value for the node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table
* @ht: The hash table
* @key: The key (cannot be an empty string)
* @value: The value associated with the key (must be duplicated)
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	/* Update value if key already exists */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (update_value(current, value));
		current = current->next;
	}

	/* Key not found -> create new node */
	new_node = create_node(key, value);
	if (!new_node)
		return (0);

	/* Insert at beginning of list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
