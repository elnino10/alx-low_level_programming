#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; ++i)
	{
		if (*argv[i] == '-')
			printf("0\n");
		else if (isdigit(*argv[i]))
			cents = atoi(argv[i]);
		else
			return (1);
	}

	if (cents == 0)
		return (1);

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
	while (cents > 0)
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
