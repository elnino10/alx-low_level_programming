#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: pointer to head node pointer
 *
 * Return: address of the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *next_node;

	*head = NULL;
	while (current != NULL)
	{
		next_node = current->next;
		current->next = *head;
		*head = current;
		current = next_node;
	}
	return (*head);
}
