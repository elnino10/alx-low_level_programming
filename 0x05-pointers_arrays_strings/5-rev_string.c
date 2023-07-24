#include "main.h"
int _strlen(char *s);

/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int j, l;
	char k;

	l = _strlen(s);
	for (j = 0; j < l / 2; j++)
	{
		k = s[j];
		s[j] = s[l - 1 - j];
		s[l - 1 - j] = k;
	}
}

/**
 * _strlen - get length of string
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
