#include "main.h"

/**
 * _atoi -  converts a string to an integer
 * @s: string pointer
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int i, val, flag;
	unsigned int res;

	flag = 0;
	res = 0;
	val = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			val *= -1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			res = res * 10 + s[i] - '0';
			i++;
		}
		if (flag)
			break;
		i++;
	}
	res *= val;
	return (res);
}
