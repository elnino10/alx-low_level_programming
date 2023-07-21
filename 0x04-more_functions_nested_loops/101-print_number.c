#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 */
void print_number(int n)
{
	int i, j, numBuffer[50];

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = 0;
	while (n > 0)
	{
		numBuffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(numBuffer[j]);
}
