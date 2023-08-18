#include "3-calc.h"

/**
 * main - controls simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	int (*op_func)(int, int);

	if (argc == 4)
	{
		if (argv[2][1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		op_func = get_op_func(argv[2]);
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		calc = op_func(num1, num2);
		printf("%d\n", calc);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
