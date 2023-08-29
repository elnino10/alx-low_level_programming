#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node pointer
 * @idx: index ata which number is to be inserted
 * @n: number to be inserted
 *
 * Return: pointer to the inserted node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev, *current = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0 && *head != NULL)
	{
		new_node->next = current;
		*head = new_node;
		return (*head);
	}

	prev = current;
	while (current != NULL)
	{
		if (i == idx)
		{
			new_node->next = current;
			prev->next = new_node;
			return (new_node);
		}
		i++;
		prev = current;
		current = current->next;
	}

	if (prev->next == NULL && i == idx)
	{
		new_node->next = NULL;
		prev->next = new_node;
		return (new_node);
	}
	return (NULL);
}
