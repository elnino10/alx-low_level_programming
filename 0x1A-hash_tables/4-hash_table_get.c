#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table to look into
 * @key: key to be searched for
 *
 * Return: value associated with the element, or NULL if key
 * couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr_node = NULL;


	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	curr_node = ht->array[index];

	while (curr_node != NULL)
	{
		/*check ht for matching index*/
		if (strcmp(curr_node->key, key) == 0)
			return (curr_node->value);
		curr_node = curr_node->next;
	}
	return (NULL);
}
