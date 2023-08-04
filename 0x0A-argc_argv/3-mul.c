#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 if successful and 1 if no numbers argument passed
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; ++i)
	{
		if (i > 0)
			mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
