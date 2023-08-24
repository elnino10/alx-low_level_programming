#include "lists.h"

/**
 * list_len - gets the number of elements in a linked list_t list
 * @h: pointer to the head node
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t len = 0;

	if (temp == NULL)
	{
		return (len);
	}
	else
	{
		while (temp)
		{
			len++;
			temp = temp->next;
		}
	}
	return (len);
}
