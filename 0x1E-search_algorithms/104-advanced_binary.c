#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t lb = 0, ub = size - 1;

	if (!array || !size)
		return (-1);
	return (adv_binary_search_recurs(array, lb, ub, value));
}

/**
 * adv_binary_search_recurs - searches for value in array recursively
 * @array: pointer to the first element of the array to search in
 * @lb: array lower bound index
 * @ub: array upper bound index
 * @value: value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL
 */
int adv_binary_search_recurs(int *array, size_t lb, size_t ub, int value)
{
	size_t mid;

	if (lb > ub)
		return (-1);

	if (lb <= ub)
	{
		print_array(array, lb, ub);
		mid = (lb + ub) / 2;
		if (array[mid] == value)
			return (
					array[mid - 1] == value ? adv_binary_search_recurs(
						array, lb, mid, value) : (int)mid);
		if (array[mid] > value)
			return (adv_binary_search_recurs(array, lb, mid - 1, value));
		else
			return (adv_binary_search_recurs(array, mid + 1, ub, value));
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
