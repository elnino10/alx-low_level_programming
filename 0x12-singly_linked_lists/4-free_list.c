#include "lists.h"

/**
 * free_list -  frees a list_t list
 * @head: pointer to head node
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp, *current;

	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
