#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string
 * Return: pointer to modified string
 */
char *leet(char *str)
{
	int i;
	char *s = str;
	char arr[] = {'a', 'e', 'o', 't', 'l'};
	char code[] = {4, 3, 0, 7, 1};

	while (*str)
	{
		for (i = 0; i < 5; ++i)
		{
			if (*str == arr[i] || *str == arr[i] - 32)
				*str = code[i] + '0';
		}
		str++;
	}
	return (s);
}
