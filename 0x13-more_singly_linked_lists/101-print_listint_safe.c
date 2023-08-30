#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head node
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast_ptr = head;
	const listint_t *slow_ptr = head;
	size_t count = 0;

	/*if list has 0 node*/
	if (head == NULL)
		exit(98);

	/*check if list has a loop, and print values before loop if there is one*/
	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		/*means a loop is encountered*/
		if (slow_ptr == fast_ptr)
		{
			exit(98);
		}
		count++;
	}

	/*print remaining nodes after loop*/
	while (slow_ptr != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		slow_ptr = slow_ptr->next;
		count++;
	}
	return (count);
}
