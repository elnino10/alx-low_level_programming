#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer argument
 */
void print_number(int n)
{
	int i, j, num;
	unsigned int buffArray[50];

	i = 0;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
	}
	else
	{
		num = n;
	}

	while (num > 0)
	{
		buffArray[i] = num % 10;
		num /= 10;
		i++;
	}

	for (j = i - 1; j >= 0; --j)
		_putchar(buffArray[j] + '0');
}
