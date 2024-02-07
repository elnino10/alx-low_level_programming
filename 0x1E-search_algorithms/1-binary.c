#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: -1 if the value is not present or the array is NULL, else,
 * the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change
 */
int binary_search(int *array, size_t size, int value)
{
	int lb = 0, ub = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recurs(array, lb, ub, value));
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

	print_array(array, lb, ub);

	if (lb >= ub)
		return (-1);

	mid = (lb + ub) / 2;

	if (value == array[mid])
		return (mid);
	else if (value < array[mid])
		return (binary_search_recurs(array, lb, mid - 1, value));
	else
		return (binary_search_recurs(array, mid + 1, ub, value));
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
