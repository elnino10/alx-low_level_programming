#include "hash_tables.h"

/**
 * key_index - generates the index of a key
 * @key: the key for which index is to generated
 * @size: capacity of the hash table
 *
 * Return: index at which the key/value pair should be stored in the array of
 * the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;
	return (index);
}
