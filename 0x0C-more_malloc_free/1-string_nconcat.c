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

	i = j = 0;
	l1 = strlen(s1);
	newstr = mem_alloc(s1, s2, n);
	if (newstr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (i < l1)
		{
			newstr[i] = s1[i];
			i++;
		}
	}
	newstr[i] = '\0';
	if (s2 != NULL)
	{
		while (*s2 && j < n)
		{
			newstr[i + j] = s2[j];
			j++;
		}
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

	if (s1 != NULL && s2 != NULL)
	{
		l1 = strlen(s1);
		l2 = strlen(s2);
	}
	else if (s1 == NULL)
	{
		l1 = 0;
		l2 = strlen(s2);
	}
	else if (s2 == NULL)
	{
		l1 = strlen(s1);
		l2 = 0;
	}
	else
	{
		l1 = l2 = 0;
	}
	if (n < l2)
		return (l1 + n);
	else
		return (l1 + l2);
}
