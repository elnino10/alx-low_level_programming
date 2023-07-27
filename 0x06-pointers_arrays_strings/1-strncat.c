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
	int i, j, destlen, srclen;
	char *ptr;

	ptr = dest;
	i = 0;
	destlen = _strlen(dest);
	srclen = _strlen(src);
	if (srclen >= n)
	{
		while (src[i] < src[n] && n != 0)
		{
			dest[destlen] = src[i];
			destlen++;
			i++;
		}
	}
	else
	{
		for (j = destlen; j < n; ++j)
		{
			while (src[i] != '\0')
			{
				dest[destlen] = src[i];
				destlen++;
				i++;
			}
			dest[destlen] = '\0';
		}
	}
	return (ptr);
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
