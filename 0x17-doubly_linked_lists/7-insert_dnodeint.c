#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head node pointer
 * @idx: index where n is to be inserted
 * @n: value to be inserted
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	curr_node = *h;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->next->prev = new_node;
		*h = new_node;
		return (*h);
	}
	while (curr_node->next != NULL && idx > 0)
	{
		count++;
		curr_node = curr_node->next;
		if (count == idx)
		{
			curr_node->prev->next = new_node;
			new_node->prev = curr_node->prev;
			curr_node->prev = new_node;
			new_node->next = curr_node;
			return (new_node);
		}
	}
	if (idx == ++count)
	{
		new_node->next = NULL;
		curr_node->next = new_node;
		new_node->prev = curr_node;
		return (new_node);
	}
	return (NULL);
}
