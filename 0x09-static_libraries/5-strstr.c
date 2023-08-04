#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string pointer
 * @needle: substring pointer
 * Return: returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	j = 0;
	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
