#include "main.h"

/**
 * print_most_numbers - prints 0 to 9, but skips 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (('0' + i) != ('0' + 2) && ('0' + i) != ('0' + 4))
			_putchar('0' + i);
	}
	_putchar('\n');
}
