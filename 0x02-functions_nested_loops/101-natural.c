#include <stdio.h>

/**
 * main - prints sum of multiples of 3 and 5 in 1024
 * Return: returns 0 (success)
 */
int main(void)
{
	int i, val, sum;

	val = 1024;
	for (i = 1; i < val; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
