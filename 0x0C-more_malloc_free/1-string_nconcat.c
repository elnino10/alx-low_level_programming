#include <stdlib.h>
#include <string.h>
#include "main.h"
char *mem_alloc(char *, char *, unsigned int);
int get_len(char *, char *, unsigned int);

/**
 * string_nconcat - concatenates s2 to s1
 * @s1: string one
 * @s2: string two
 * @n: number of s2 to be added to s1
 *
 * Return: pointer to new memory location of the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1;
	char *newstr;

	l1 = strlen(s1);
	newstr = mem_alloc(s1, s2, n);

	if (s1 == NULL || s2 == NULL)
		return ('\0');

	i = 0;
	while (i < l1)
	{
		newstr[i] = s1[i];
		i++;
	}

	j = 0;
	while (*s2 && j < n)
	{
		newstr[i + j] = s2[j];
		j++;
	}
	newstr[i + j] = '\0';
	return (newstr);
}

/**
 * mem_alloc - allocates memory for program
 * @s1: string one
 * @s2: string two
 * @n: number of s2 to be added to s1
 *
 * Return: pointer to allocated memory
 */
char *mem_alloc(char *s1, char *s2, unsigned int n)
{
	unsigned int len;
	char *new_mem;

	len = get_len(s1, s2, n);
	new_mem = malloc(len + 1);
	if (new_mem == NULL)
		return (NULL);
	return (new_mem);
}

/**
 * get_len - gets total length of string to use
 * @s1: string one
 * @s2: string two
 * @n: number of characters to be added
 * Return: total length to be used
 */
int get_len(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n < l2)
		return (l1 + n);
	else
		return (l1 + l2);
}
