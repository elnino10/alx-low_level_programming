#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t print_listint(const listint_t *h)
	{
		const listint_t *temp;
		int count = 0;

		temp = h;
		while (temp != NULL)
		{
			count++;
			printf("%d\n", temp->n);
			temp = temp->next;
		}
		return (count);
	}
}
