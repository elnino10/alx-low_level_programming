#include <stdio.h>
#include <stdlib.h>
void change(int);

/**
 * main - prints number of coins for change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	int cents, i;

	for (i = 0; i < argc; ++i)
	{
		if (i > 0)
			cents = atoi(argv[i]);
	}

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
		printf("0\n");

	change(cents);
	return (0);
}

/**
 * change - calculates number of coins
 * @cents: amount to change
 */
void change(int cents)
{
	int i, count;
	int arr[] = {25, 10, 5, 2, 1};

	count = 0;
	i = 0;
	while (cents)
	{
		if (cents >= arr[i])
		{
			if (cents - arr[i] == 0)
			{
				count++;
				break;
			}
			count++;
			cents -= arr[i];
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", count);
}
