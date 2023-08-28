#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node pointer
 *
 * Return: data of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num;

	if (*head == NULL)
		return (0);

	*head = temp->next;
	num = temp->n;
	free(temp);

	return (num);
}
