#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array of integers
  * using jump search.
  * @array: pointer to the first element of the array to search
  * @size: number of elements in the array
  * @value: value to search for
  *
  * Return: -1 if the value is not present or the array is NULL, else,
  * the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array and
  * Uses the square root of the array size as the jump step
  */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, step;

	if (!array || !size)
		return (-1);

	step = sqrt(size);
	start = end = 0;

	do {
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += step;
	} while (array[end] < value && end < size);

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	end = end < size - 1 ? end : size - 1;

	for (; start < end && array[start] < value; start++)
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);

	return (array[start] == value ? (int)start : -1);
}
