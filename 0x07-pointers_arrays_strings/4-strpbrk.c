#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to accept string
 * Return:  returns a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; ++i)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
