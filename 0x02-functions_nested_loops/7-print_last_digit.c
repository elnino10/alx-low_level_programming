#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: number to check
 * Return: returns the last digit
 */
int print_last_digit(int num)
{
	int last;

	if (num > 0)
	{
		last = num % 10;
		_putchar(last + 48);
	}
	else if (num < 0)
	{
		last = -num % 10;
		_putchar(last + 48);
	}
	else
	{
		last = 0;
		_putchar(last + 48);
	}
	return (0);
}
