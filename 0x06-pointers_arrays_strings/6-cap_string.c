#include "main.h"

/**
 * cap_string - capitalize each word in string
 * @str: pointer to string
 * Return: pointer to modified string
 */
char *cap_string(char *str)
{
	int i, capitalizeNext;
	char del[] = " \t\n,.;!?\"(){}";
	char *ptr = str;

	capitalizeNext = 1;
	while (*str)
	{
		if (capitalizeNext && *str >= 'a' && *str <= 'z')
			*str -= 32;
		capitalizeNext = 0;
		for (i = 0; i < 13; ++i)
		{
			if (*str == del[i])
				capitalizeNext = 1;
		}

		str++;
	}
	return (ptr);
}
