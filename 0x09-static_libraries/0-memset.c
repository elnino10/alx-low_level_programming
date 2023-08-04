#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to bytes memory area
 * @b: constant bytes
 * @n: maximum number of bytes
 * Return: pointer to the modified bytes memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (ptr);
}
