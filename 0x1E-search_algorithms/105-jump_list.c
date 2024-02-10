#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL
 * if value is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *start_ptr, *end_ptr;
	size_t step = sqrt(size), blocksize = 0;

	if (!list)
		return (NULL);

	start_ptr = end_ptr = list;

	while (end_ptr->n < value && blocksize < size - 1)
	{
		blocksize += step;
		start_ptr = end_ptr;
		while (end_ptr->index < blocksize)
		{
			if (end_ptr->index == size - 1)
				break;
			end_ptr = end_ptr->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", end_ptr->index, end_ptr->n);
	}
	printf("Value found between indexes ");
	printf("[%ld] and [%ld]\n", start_ptr->index, end_ptr->index);
	end_ptr->index = end_ptr->index < size - 1 ? end_ptr->index : size - 1;

	for (; (start_ptr->index < end_ptr->index) && (
				start_ptr->n < value); start_ptr = start_ptr->next)
	{
		printf("Value checked at index ");
		printf("[%ld] = [%d]\n", start_ptr->index, start_ptr->n);
	}
	printf("Value checked at index ");
	printf("[%ld] = [%d]\n", start_ptr->index, start_ptr->n);

	return (start_ptr->n == value ? start_ptr : NULL);
}
