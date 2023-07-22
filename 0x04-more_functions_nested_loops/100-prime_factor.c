#include <stdio.h>
int largestPrimeFactor(int num);
int isPrime(int num);

/**
 * main - finds largest prime factor of a number and prints it
 * Return: returns 0 if successful
 * largestPrimeFactor: checks for largest prime factor
 * isPrime: checks if the provided number is prime
 */

int main(void)
{
	long int number = 612852475143;
	int largestPrime = largestPrimeFactor(number);

	printf("%d\n", largestPrime);
	return (0);
}

int isPrime(int num)
{
	int i;

	if (num <= 1)
		return (0);

	for (i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return (0);
	}

	return (1);
}

int largestPrimeFactor(int num)
{
	int i;
	int largestFactor = 1;

	while (num % 2 == 0)
	{
		largestFactor = 2;
		num /= 2;
	}

	for (i = 3; i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largestFactor = i;
			num /= i;
		}
	}

	return (largestFactor);
}
