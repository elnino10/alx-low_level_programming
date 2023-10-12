#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head node of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr_node;
	size_t count = 0;

	if (!h)
		return (0);

	curr_node = h;
	while (curr_node != NULL)
	{
		printf("%d\n", curr_node->n);
		count++;
		curr_node = curr_node->next;
	}
	return (count);
}
