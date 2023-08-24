#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp)
	{
		if (temp->str != NULL)
		{
			printf("[%u] %s\n", temp->len, temp->str);
			count++;
		}
		else
		{
			printf("[0] (%s)\n", "nil");
			count++;
		}
		temp = temp->next;
	}

	return (count);
}

