#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: desination file
 * @src: source file
 * Return: returns a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len;
	char *ptr = dest;

	i = 0;
	len = _strlen(dest);
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (ptr);
}

/**
 * _strncat - concatenates two strings two strings
 * @dest: destination file
 * @src: source file
 * @n: number of strings to be concatenated
 * Return: pointer to destination file
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = _strlen(dest);
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/**
 * _strncpy - copies a string
 * @dest: destination file
 * @src: source file
 * @n: number of bytes to copy
 * Return: returns pointer to destination file
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 is equal, negative if s1 < s2 and positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, val, flag;

	val = 0;
	flag = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; ++i)
	{
		if (s1[i] == s2[i])
		{
			flag = 0;
		}
		else
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		val = 0;
	}
	else
	{
		val = s1[i] - s2[i];
	}
	return (val);
}

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

