#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long num[98];

	num[0] = 1;
	num[1] = 2;
	for (i = 2; i < 98; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
	}
	for (i = 0; i < 98; i++)
	{
		if (i != 97)
			printf("%lu, ", num[i]);
		else
			printf("%lu", num[i]);
	}
	printf("\n");
	return (0);
}
