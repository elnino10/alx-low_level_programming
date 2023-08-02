#include "main.h"

/**
 * factorial - finds the factorial of a given number
 * @n: integer argument
 * Return: returns factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
