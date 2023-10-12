#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head node
 * @index: index of node to be returned
 *
 * Return: node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr_node;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	curr_node = head;
	count = 0;
	while (curr_node != NULL)
	{
		if (count == index)
			return (curr_node);
		count++;
		curr_node = curr_node->next;
	}
	return (NULL);
}
