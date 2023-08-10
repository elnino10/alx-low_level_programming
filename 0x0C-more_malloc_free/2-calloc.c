#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: byte of each element based on type
 *
 * Return: pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb)
	{
		((unsigned int *)mem)[size] = 0;
		i++;
	}
	return (mem);
}
