#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of str
 * @str: pointer to string to be duplicated
 * Return: pointer to the duplicate string
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	s = malloc(sizeof(str));
	if (*str == '\0')
		return (NULL);

	i = 0;
	while (*str)
	{
		s[i] = *str;
		str++;
		i++;
	}
	return (s);
}
