#include "main.h"
int _strlen(char *s);

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int l, i;

	l = _strlen(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= l / 2)
			_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - determines length of string
 * @s: pointer to string
 * Return: returns length of string
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
