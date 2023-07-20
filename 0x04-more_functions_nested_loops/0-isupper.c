#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: argument to be checked
 * Return: returns 1 if upper case and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
