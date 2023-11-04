#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *curr_node = NULL;
	size_t count;
	size_t node_count = 0;

	if (!ht)
	{
		return;
	}
	count = node_len(ht);

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		curr_node = ht->array[index];
		while (curr_node)
		{
			node_count++;
			if (node_count == count)
				printf("'%s': '%s'", curr_node->key, curr_node->value);
			else
				printf("'%s': '%s', ", curr_node->key, curr_node->value);
			curr_node = curr_node->next;
		}
	}
	printf("}\n");
}

/**
 * node_len - gets the number of elements in hash table
 * @ht: pointer to the hash table
 *
 * Return: number of elements in table
 */
size_t node_len(const hash_table_t *ht)
{
	size_t index = 0, count = 0;
	hash_node_t *curr_node = NULL;

	if (!ht)
		return (0);

	while (index < ht->size)
	{
		curr_node = ht->array[index];
		while (curr_node)
		{
			count++;
			curr_node = curr_node->next;
		}
		index++;
	}
	return (count);
}
