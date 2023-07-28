#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to string
 * Return: returns a pointer to the encoded string
 */
char *rot13(char *str)
{
	char base, *ptr;

	ptr = str;
	while (*str)
	{
		base = (*str & 32) + 65;
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			*str = (*str - base + 13) % 26 + base;
		str++;
	}
	return (ptr);
}
