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

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[_strlen] && str)
		_strlen++;

	new_node->str = str ? strdup(str) : NULL;
	new_node->len = _strlen;
	new_node->next = *head ? *head : NULL;
	*head = new_node;

	return (*head);
}
