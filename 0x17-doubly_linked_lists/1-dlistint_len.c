#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head node
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr_node;
	size_t count = 0;

	if (!h)
	{
		return (0);
	}

	curr_node = h;
	while (curr_node != NULL)
	{
		count++;
		curr_node = curr_node->next;
	}
	return (count);
}
