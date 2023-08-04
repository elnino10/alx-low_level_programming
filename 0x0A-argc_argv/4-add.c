#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	if (argc > 0)
	{
		for (i = 1; i < argc; ++i)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
