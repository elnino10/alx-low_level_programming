#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index of  list
 * @head: pointer to the head node pointer
 * @index: index of node to be deleted
 *
 * Return: 1 if successful and -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	prev = current;
	while (current != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		i++;
		prev = current;
		current = current->next;
	}
	return (-1);
}
