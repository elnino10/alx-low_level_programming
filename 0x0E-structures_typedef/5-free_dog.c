#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function frees dogs
 * @d: the structure to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
