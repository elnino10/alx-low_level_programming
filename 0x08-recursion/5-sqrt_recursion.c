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
	return (num_sqrt(n, 1, n / 2));
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

	mid = (start + end) / 2;

	if (start <= end)
	{
		if (mid * mid == n)
			return (mid);
		else if (mid * mid < n)
			return (num_sqrt(n, mid + 1, end));
		else
			return (num_sqrt(n, start, mid - 1));
	}
	return (-1);
}
