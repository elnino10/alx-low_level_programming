#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: argument to be checked
 * Return: returns 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= ('0' + 0) && c <= ('0' + 9))
		return (1);
	else
		return (0);
}

/**
 * _strlen - returns the length of a string
 * Return: 0 (success)
 * @s: pointer variable
 */
int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

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
