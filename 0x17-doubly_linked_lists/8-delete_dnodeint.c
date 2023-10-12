#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t list
 * @head: pointer to the head pointer
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr_node;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	curr_node = *head;
	if (index == 0 && *head)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(curr_node);
		return (1);
	}
	else if (index > 0)
	{
		while (curr_node->next != NULL)
		{
			count++;
			curr_node = curr_node->next;
			if (index == count)
			{
				if (curr_node->next != NULL)
				{
					curr_node->prev->next = curr_node->next;
					curr_node->next->prev = curr_node->prev;
					free(curr_node);
					return (1);
				}
			}
		}
		if (index == count) /*curr_node is at the last node and at index*/
		{
			curr_node->prev->next = NULL;
			free(curr_node);
			return (1);
		}
	}
	return (-1);
}
