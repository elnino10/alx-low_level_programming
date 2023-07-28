#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer argument
 */
void print_number(int n)
{
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		if (num > 9)
			print_number(num / 10);
		_putchar('0' + num % 10);
	}
	else
	{
		num = n;
		if (num > 9)
			print_number(num / 10);
		_putchar('0' + num % 10);
	}
}
