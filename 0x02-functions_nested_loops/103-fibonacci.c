#include <stdio.h>

/**
 * main - prints even numbers in fibonacci
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long num[50];
	unsigned long sumEven;

	num[0] = 1;
	num[1] = 2;
	i = 2;
	while ((num[i - 1] + num[i - 2]) < 4000000)
	{
		num[i] = (num[i - 1] + num[i - 2]);
		i++;
	}
	for (i = 0; (num[i - 1] + num[i - 2]) < 4000000; i++)
	{
		if (num[i] % 2 == 0)
		{
			printf("%lu, ", num[i]);
			sumEven += num[i];
		}
	}
	printf("\n%lu\n", sumEven);
	return (0);
}
