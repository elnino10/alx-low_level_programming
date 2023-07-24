#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: pointer
 */
void print_rev(char *s)
{
	int j, l;

	l = _strlen(s);

	for (j = l; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns length of string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
