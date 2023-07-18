#include "main.h"

/**
 * print_alphabet - print alphabets
 */
void print_alphabet(void)
{
	int i;
	char str[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	i = 0;
	while (i < 26)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
