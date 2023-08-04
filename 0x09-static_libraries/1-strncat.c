#include "main.h"
int _strlen(char *str);

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
 * _strlen - gets length of string
 * @str: the string passed as argument
 * Return: integer value of length
 */
int _strlen(char *str)
{
	int i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
