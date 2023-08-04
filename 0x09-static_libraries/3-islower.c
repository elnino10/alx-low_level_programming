#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c: argument to be checked
 * Return: returns 1 if lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
