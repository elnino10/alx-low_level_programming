#include "main.h"

/**
 * _islower - checks if character is lower case letter or not *
 * @c: parameter to be checked
 * Return: returns value 1 if true or 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
