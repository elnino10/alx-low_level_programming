#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: number to check
 * Return: returns the value of last digit
 */
int print_last_digit(int num)
{
	int last;

	if (num > 0)
	{
		if (num < 10)
			last = num;
		else
			last = num % 10;
		_putchar('0' + last);
		return (last);
	}
	else if (num < 0)
	{
		last = num % 10;
		_putchar('0' - last);
		return (-last);
	}
	else
	{
		last = 0;
		_putchar(last + '0');
		return (last);
	}
}
