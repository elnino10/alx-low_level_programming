#include "lists.h"

/**
 * sum_listint - gets sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head node
 *
 * Return: sum of the data of list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
