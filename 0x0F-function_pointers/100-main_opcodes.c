#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the opcodes of the function
 * @argc: Argument count
 * @argv: Argument vector pointer
 *
 * Return: 0 on success, Print Error for errors
 */
int main(int argc, char *argv[])
{
	char *m;
	int index, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	m = (char *)&main;
	bytes = atoi(argv[1]);
	index = 0;
	while (index < bytes - 1)
	{
		printf("%02hhx ", m[index]);
		index++;
	}
	printf("%02hhx", m[index]);
	putchar('\n');
	return (0);
}
