#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to matched character or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = s;
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		if (c == '\0')
			*s = '\0';

		s++;
	}
	return (ptr);
}
