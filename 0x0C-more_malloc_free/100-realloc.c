#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to old array
 * @old_size: size of ptr
 * @new_size: size of new array
 *
 * Return: pointer to the new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem, *old_mem;
	unsigned int i;

	old_mem = ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_mem = malloc(new_size);
		return (new_mem);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);

	for (i = 0; i < old_size; ++i)
		new_mem[i] = old_mem[i];
	free(old_mem);
	return (new_mem);
}
