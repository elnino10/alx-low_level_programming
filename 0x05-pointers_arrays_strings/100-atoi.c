#include "main.h"

/**
 * _atoi -  converts a string to an integer
 * @s: string pointer
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int i;
	unsigned int res;

	res = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		res = res * 10 + s[i] - '0';
	}
	return (res);
}
