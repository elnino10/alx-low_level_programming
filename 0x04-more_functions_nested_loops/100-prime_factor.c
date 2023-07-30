#include <stdio.h>

/**
 * main - finds largest prime factor of a number and prints it
 * Return: returns 0 if successful
 */

int main(void)
{
	long int largestPrime, factor, number;

	number = 612852475143;
	factor = 2;
	while (number > 1)
	{
		if (number % factor == 0)
		{
			largestPrime = factor;
			number /= factor;
		}
		else
		{
			factor++;
		}

	}

	printf("%ld\n", largestPrime);
	return (0);
}
