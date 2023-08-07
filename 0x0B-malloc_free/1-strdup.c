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
	int i, len;
	char *s;

	i = 0;
	len = 0;
	while (str[len])
		len++;

	s = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	if (s == NULL)
		return (NULL);

	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i + 1] = '\0';
	return (s);
}
