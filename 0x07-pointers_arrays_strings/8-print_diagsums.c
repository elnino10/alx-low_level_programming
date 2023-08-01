#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers
 * @a: pointer to a
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumA, sumB;

	i = 0;
	j = size - 1;
	sumA = 0;
	sumB = 0;

	while (i <= (size * size))
	{
		sumA += a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		sumB += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", sumA, sumB);
}
