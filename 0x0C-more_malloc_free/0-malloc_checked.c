#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: variable name and type
 *
 * Return: a void pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
