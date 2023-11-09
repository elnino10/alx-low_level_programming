#include "hash_tables.h"

/**
 * shash_table_create - creates the hash table
 * @size: size of the hash table array bucket
 *
 * Return: pointer to the hash table created
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *s_table = NULL;
	size_t index;

	s_table = malloc(sizeof(shash_table_t));
	if (!s_table)
		return (NULL);

	s_table->size = size;
	s_table->shead = NULL;
	s_table->stail = NULL;
	s_table->array = calloc(s_table->size, sizeof(shash_node_t *));
	if (!s_table->array)
	{
		free(s_table);
		return (NULL);
	}

	for (index = 0; index < s_table->size; index++)
		s_table->array[index] = NULL;

	return (s_table);
}

/**
 * shash_table_set - inserts an item into the hash table
 * @ht: pointer to the hash table
 * @key: the key to be hashed for insertion
 * @value: value to be inserted
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL, *curr_node = NULL;
	size_t index;
	int result, val;

	if (!ht || !key)
		return (0);
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	val = set_node_slist(ht, new_node); /*insert new node in sorted list*/
	if (val)
	{
		if (!ht->array[index]) /*new node at first position if index empty*/
		{
			new_node->next = NULL;
			ht->array[index] = new_node;
		}
		else
		{
			curr_node = ht->array[index];
			result = update_node_key(new_node, curr_node, key, value);
			if (result == 1)
				return (1);
			new_node->next = curr_node; /*insert node as first in index*/
			ht->array[index] = new_node;
		}
	}
	return (1);
}

/**
 * set_node_slist - sets the new node in a sorted linked list
 * @ht: pointer to the hash table
 * @new_node: pointer to node to be set
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int set_node_slist(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *curr_node = ht->shead;

	if (!ht || !new_node)
		return (0);
	if (ht->shead == NULL)
	{
		new_node->snext = NULL;
		new_node->sprev = NULL;
		ht->shead = new_node;
		return (1);
	}
	while (curr_node->snext)
	{
		if (strcmp(new_node->key, curr_node->key) < 0)
		{
			if (curr_node->sprev == NULL) /*if curr_node is head*/
			{
				new_node->sprev = NULL;
				new_node->snext = curr_node;
				curr_node->sprev = new_node;
				ht->shead = new_node;
				return (1);
			}
			new_node->sprev = curr_node->sprev;
			curr_node->sprev->snext = new_node;
			new_node->snext = curr_node;
			curr_node->sprev = new_node;
			return (1);
		}
		else if (strcmp(new_node->key, curr_node->key) == 0)
			return (1);
		curr_node = curr_node->snext;
	}
	insert_at_edge(ht, new_node, curr_node);
	return (1);
}

/**
 * insert_at_edge - inserts node at head or tail when ht->shead is not null
 * @ht: pointer to the hash table
 * @new_node: pointer to the new node
 * @curr_node: pointer to the current node
 *
 * Return: nothing
 */
void insert_at_edge(
		shash_table_t *ht, shash_node_t *new_node, shash_node_t *curr_node)
{
	if (strcmp(new_node->key, curr_node->key) > 0)
	{
		new_node->snext = NULL;
		new_node->sprev = curr_node;
		curr_node->snext = new_node;
		ht->stail = new_node;
	}
	else
	{
		new_node->sprev = NULL;
		new_node->snext = curr_node;
		curr_node->sprev = new_node;
		ht->shead = new_node;
	}
}

/**
 * update_node_key - update current node value
 * @new_node: pointer to new node
 * @curr_node: pointer to current node
 * @key: key to be compared for update
 * @value: new value to replace the old
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int update_node_key(
		shash_node_t *new_node, shash_node_t *curr_node, const char *key,
		const char *value)
{
	while (curr_node) /*traverse list for matching keys*/
	{
		if (strcmp(curr_node->key, (char *)key) == 0)
		{
			free(curr_node->value);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			curr_node->value = strdup((char *)value);
			return (1);
		}
	}
	return (0);
}
