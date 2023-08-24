#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: pointer to the head node's pointer
 * @str: string to be added to new element
 *
 * Return: pointer to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int _strlen = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (*str)
	{
		_strlen++;
		str++;
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
		return (NULL);

	new_node->len = _strlen;


	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (*head);
}
