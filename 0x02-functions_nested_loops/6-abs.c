#include "main.h"

/**
 * _abs - prints the absolute value of any given number
 * @a: value to be checked
 * Return: returns an unsigned integer value
 */
int _abs(int a)
{
	int val = a;

	if (val > 0)
		return (val);
	else if (val < 0)
		return (-val);
	else
		return (0);
}
