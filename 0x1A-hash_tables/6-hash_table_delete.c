#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr_node = NULL;
	size_t index;

	for (index = 0; index < ht->size; index++)
	{
		curr_node = ht->array[index];
		free_bucket(curr_node);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_bucket - frees all the nodes in a hash table bucket
 * @item: pointer to the node
 *
 * Return: nothing
 */
void free_bucket(hash_node_t *item)
{
	hash_node_t *curr_node = NULL;

	curr_node = item;
	while (curr_node)
	{
		item = curr_node;
		curr_node = curr_node->next;
		free(item->key);
		free(item->value);
		free(item);
	}
}
