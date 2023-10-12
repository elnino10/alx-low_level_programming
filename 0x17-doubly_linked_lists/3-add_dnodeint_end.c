#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head node pointer
 * @n: member n to be added to list
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr_node, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	curr_node = *head;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}

		curr_node->next = new_node;
		new_node->prev = curr_node;
	}

	return (new_node);
}
