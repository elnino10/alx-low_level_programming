#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string pointer
 * @needle: substring pointer
 * Return: returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int match;
	char *ptr = haystack;
	char *str = needle;

	match = 1;
	while (*haystack != '\0')
	{
		while (*str)
		{
			if (*str != *ptr)
			{
				match = 0;
				break;
			}
			str++;
			ptr++;
		}
		if (match)
			return (haystack);
		haystack++;
	}
	return ('\0');
}
