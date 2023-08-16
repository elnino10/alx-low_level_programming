#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: callback function for comparing integer with array elements
 *
 * Return: index of first matching element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, compare;

	if (!array || !size || !cmp)
		return (-1);

	if (size == 0)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		compare = cmp(array[i]);
		if (compare != 0)
			return (i);
	}
	return (-1);
}
