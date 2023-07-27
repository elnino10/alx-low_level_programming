#include "main.h"
int _strlen(char *str);

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
