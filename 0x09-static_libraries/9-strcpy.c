#include "main.h"
#include <stdio.h>

/**
 * _strcpy -copies string from one file to another
 * @dest: destination file
 * @src: source file
 * Return: return the copied file
 */
char *_strcpy(char *dest, char *src)
{
	char *mainDest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (mainDest);
}
