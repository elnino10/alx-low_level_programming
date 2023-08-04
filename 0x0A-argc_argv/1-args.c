#include <stdio.h>

/**
 * main - prints number of arguments passed to program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 successful
 */
int main(int argc, char **argv)
{
	int i, count;

	(void)argv;
	count = 0;
	for (i = 0; i < argc; ++i)
	{
		if (i > 0)
			count += 1;
	}
	printf("%d\n", count);
	return (0);
}
