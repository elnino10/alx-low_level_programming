#include "main.h"
int find_prime(int, int);

/**
 * is_prime_number - checks for prime number
 * @n: integer argument
 * Return: returns 1 if prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (find_prime(n, 2));
}

/**
 * find_prime - tests for prime number
 * @n: integer argument
 * @num: dividing number
 * Return: returns 1 for prime and 0 otherwise
 */
int find_prime(int n, int num)
{
	if (num > n / 2)
		return (1);
	if (n % num == 0)
		return (0);
	return (find_prime(n, num + 1));
}
