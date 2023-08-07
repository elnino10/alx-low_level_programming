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
	if (s1 == NULL && s2 == NULL)
		len = 0;
	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j])
			j++;
	}
	len = i + j;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1)
		{
			ptr[k++] = *s1++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2)
		{
			ptr[k++] = *s2++;
		}
	}
	ptr[k + 1] = '\0';
	return (ptr);
}
