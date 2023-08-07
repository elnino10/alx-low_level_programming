#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char
 * @size: size of array
 * @c: character value
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size);
	if (size == 0)
		return ('\0');
	for (i = 0; i < size; ++i)
		s[i] = c;
	return (s);
}
