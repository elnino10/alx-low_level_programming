#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the first node
 *
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
