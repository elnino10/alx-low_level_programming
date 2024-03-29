#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index position of the value -1 if value is not present
 * in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t lb = 0, ub = size - 1, i = 1;

	if (!array || !size)
		return (-1);

	if (array[lb] != value)
	{
		while (i < (ub - lb) && array[i] <= value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i *= 2; /*use powers of 2 as exponential ranges*/
		}
	}
	ub = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, ub);
	return (binary_search_recurs(array, i / 2, ub, value));
}

/**
 * binary_search_recurs - searches recursively for value
 * @array: pointer to the first element in array
 * @lb: lower bound element
 * @ub: upper bound element
 * @value: value to search for
 *
 * Return: -1 if value is not found or the array is NULL, else,
 * return index location of value
 */
int binary_search_recurs(int *array, size_t lb, size_t ub, int value)
{
	int mid;


	if (lb > ub)
		return (-1);

	if (lb <= ub)
	{
		print_array(array, lb, ub);
		mid = (lb + ub) / 2;

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			return (binary_search_recurs(array, lb, mid - 1, value));
		else
			return (binary_search_recurs(array, mid + 1, ub, value));
	}
	return (-1);
}

/**
 * print_array - prints an array
 * @array: pointer to array to print
 * @lb: array's lower bound index
 * @ub: array's upper bound index
 *
 * Return: nothing
 */
void print_array(int *array, int lb, int ub)
{
	int i;

	printf("Searching in array: ");
	for (i = lb; i < ub; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
