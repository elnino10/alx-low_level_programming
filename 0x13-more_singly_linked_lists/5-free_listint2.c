#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head node pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	if (*head == NULL)
		return (NULL);

	current = *head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}
