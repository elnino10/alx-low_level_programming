#include <stdio.h>

/**
 * main - prints sum of multiples of 3 and 5 in 1024
 * Return: returns 0 (success)
 */
int main(void)
{
	int k, n, sum, sum3, sum5;

	k = 1024;
	sum = 0;
	sum3 = 0;
	sum5 = 0;
	for (n = 1; 3 * n < k; n++)
	{
		sum3 += 3 * n;
	}
	for (n = 1; 5 * n < k; n++)
	{
		sum5 += 5 * n;
	}
	sum = sum3 + sum5;
	printf("%d\n", sum);
	return (0);
}
