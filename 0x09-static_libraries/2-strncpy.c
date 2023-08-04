#include "main.h"
int _strlen(char *str);

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
