#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: parameter to be checked
 * Return: returns 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
