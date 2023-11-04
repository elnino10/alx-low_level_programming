#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr_node = NULL, *next_node = NULL;
	size_t index;

	for (index = 0; index < ht->size; index++)
	{
		next_node = ht->array[index];
		while (next_node)
		{
			curr_node = next_node;
			next_node = next_node->next;
			free(curr_node->key);
			free(curr_node->value);
			free(curr_node);
		}
	}
	free(ht->array);
	free(ht);
}
