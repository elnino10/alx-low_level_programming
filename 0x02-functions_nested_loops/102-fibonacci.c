#include <stdio.h>

/**
 * main - print 50 fibonacci numbers, from 1 and 2
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int num[50];

	num[0] = 1;
	num[1] = 2;

	for (n = 2; n < 50; n++)
	{
		num[n] = num[n - 1] + num[n - 2];
	}

	for (n = 0; n < 50; n++)
	{
		if (n != 49)
			printf("%d, ", num[n]);
		else
			printf("%d\n", num[n]);
	}
	return (0);
}
