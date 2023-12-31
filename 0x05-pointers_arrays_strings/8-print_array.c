#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to array
 * @n: size of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 1)
		{
			if (i != n - 1)
				printf("%d, ", *(a + i));
			else
				printf("%d\n", *(a + i));
		}
		else if (n == 1)
		{
			printf("%d\n", *a);
		}
		else
		{
			printf("\n");
		}
	}
}
