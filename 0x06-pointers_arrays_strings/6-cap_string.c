#include "main.h"

/**
 * cap_string - capitalize each word in string
 * @str: pointer to string
 * Return: pointer to modified string
 */
char *cap_string(char *str)
{
	int i, capitalizeNext;

	capitalizeNext = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ',' || str[i] == ';' || str[i] == '.'
|| str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '('
|| str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == ' '
|| str[i] == '\t' || str[i] == '\n')
		{
			capitalizeNext = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			capitalizeNext = 0;
		}
		
		if (capitalizeNext && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
			capitalizeNext = 0;
		}
	}
	return (str);
}
