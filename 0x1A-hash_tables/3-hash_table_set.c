#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the table
 * @ht: pointer to the hash table
 * @key: key to be inserted
 * @value: value of the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *curr_node;
	unsigned long int index;

	/*create item node with key, value and next node*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	if (!key)
		return (0);
	new_node->key = strdup(key);
	/*index where node will be stored*/
	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
	{
		/*sets node at position if empty*/
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		curr_node = ht->array[index];
		while (curr_node->next)
		{
			if (strcmp(curr_node->key, key) == 0)
			{
				/*update value to new value*/
				free(curr_node->value);
				curr_node->value = strdup(value);
				return (1);
			}
			curr_node = curr_node->next;
		}
		/*make node the first node at array[index]*/
		new_node->value = strdup(value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
