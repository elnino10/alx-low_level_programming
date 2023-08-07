#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string one
 * @s2: pointer to string two
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, len;
	char *ptr;

	i = j = k = len = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[i])
	{
		len++;
		i++;
	}
	while (s2[j])
	{
		len++;
		j++;
	}
	len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);
	while (*s1)
	{
		ptr[k] = *s1;
		s1++;
		k++;
	}
	while (*s2)
	{
		ptr[k] = *s2;
		s2++;
		k++;
	}
	ptr[k + 1] = '\0';
	return (ptr);
}
