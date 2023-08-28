#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current, *prev;

	current = head;
	while (current != NULL)
	{
		prev = current;
		current = current->next;
		free(prev);
	}
	head = NULL;
}
