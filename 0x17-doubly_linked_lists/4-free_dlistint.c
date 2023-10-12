#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node;

	curr_node = head;
	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
		free(curr_node->prev);
	}
	free(curr_node);
	head = NULL;
}
