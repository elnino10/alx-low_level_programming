#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	int i, j;
	char str[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (j = 0; j < 10; j++)
	{
		i = 0;
		while (i < 26)
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
