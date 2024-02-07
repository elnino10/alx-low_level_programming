#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: Tnumber of elements in array
 * @value: value to search for
 *
 * Return: -1 if the value is not present or the array is NULL, else,
 * the first index where the value is located.
 *
 * Description: Print value every time it is compared in the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
