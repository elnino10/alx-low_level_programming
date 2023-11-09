#include "hash_tables.h"

/**
 * shash_table_print - prints the hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr_node = NULL;

	if (!ht->shead)
		return;

	curr_node = ht->shead;
	printf("{");
	while (curr_node->snext)
	{
		printf("'%s': '%s', ", curr_node->key, curr_node->value);
		curr_node = curr_node->snext;
	}
	printf("'%s': '%s'", curr_node->key, curr_node->value);
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the hash table in reverse
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr_node = NULL;

	if (!ht)
		return;

	printf("{");
	curr_node = ht->stail;
	while (curr_node->sprev)
	{
		printf("'%s': '%s', ", curr_node->key, curr_node->value);
		curr_node = curr_node->sprev;
	}
	printf("'%s': '%s'", curr_node->key, curr_node->value);
	printf("}\n");
}

/**
 * shash_table_delete - deletes hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr_node = NULL, *item = NULL;

	if (!ht->shead)
		return;

	curr_node = ht->shead;
	while (curr_node)
	{
		item = curr_node;
		curr_node = curr_node->snext;
		free(item->key);
		free(item->value);
		free(item);
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table to look into
 * @key: key to be searched for
 *
 * Return: value associated with the element, or NULL if key
 * couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *curr_node = NULL;
	size_t index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	curr_node = ht->array[index];
	while (curr_node)
	{
		if (strcmp(curr_node->key, key) == 0)
			return (curr_node->value);
		curr_node = curr_node->next;
	}
	return (NULL);
}
