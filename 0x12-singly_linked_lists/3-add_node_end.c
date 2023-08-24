#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head pointer
 * @str: pointer to string to be added
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	int _strlen = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	while (str[_strlen] && str)
		_strlen++;
	new_node->str = str ? strdup(str) : NULL;
	new_node->len = _strlen;
	new_node->next = NULL;

	if (*head)
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
