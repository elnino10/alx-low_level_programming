#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node of a listint_t linked list
 * @head: pointer to the head node
 * @index: index to be returned
 *
 * Return: address of the node at index position or NULL if not in list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (NULL);
}
