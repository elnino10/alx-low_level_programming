#include "main.h"
int num_sqrt(int n, int start, int end);

/**
 * _sqrt_recursion - finds square root of n
 * @n: integer argument
 * Return: returns square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	if (n < 0)
		return (-1);
	return (num_sqrt(n, 1, n));
}

/**
 * num_sqrt - finds square root of a number n
 * @n: number
 * @start: start point
 * @end: end point
 * Return: returns square root
 */
int num_sqrt(int n, int start, int end)
{
	int mid;
	long int sqr;

	mid = (start + end) / 2;
	sqr = (long int)mid * mid;
	if (start <= end)
	{
		if (sqr == n)
			return (mid);
		else if (sqr < n)
			return (num_sqrt(n, mid + 1, end));
		else
			return (num_sqrt(n, start, mid - 1));
	}
	return (-1);
}
