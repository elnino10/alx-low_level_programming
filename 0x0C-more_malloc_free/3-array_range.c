#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i, j;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; ++i, ++j)
		arr[j] = i;
	return (arr);
}
