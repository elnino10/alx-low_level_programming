#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data (n) of a dlistint_t list
 * @head: pointer to the head node
 *
 * Return: sum of n in a doubly linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node;
	int sum = 0;

	if (!head)
		return (0);

	curr_node = head;
	while (curr_node != NULL)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;
	}
	return (sum);
}
