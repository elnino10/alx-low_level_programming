#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: column size of array
 * @height: row size of array
 * Return: pointer to the 2-D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	for (i = 0; i < height; ++i)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < height; ++j)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
			ptr[i][j] = 0;
	}
	return (ptr);
}
