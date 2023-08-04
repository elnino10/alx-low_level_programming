#include "main.h"

/**
 * _strlen - returns the length of a string
 * Return: 0 (success)
 * @s: pointer variable
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
