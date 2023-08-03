#include "main.h"
#include <string.h>
int check_palindrome(char *, char *);

/**
 * is_palindrome - finds a palindrome
 * @s: pointer to string
 * Return: returns 1 if palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	char *start = s;
	char *end = s + (len - 1);

	return (check_palindrome(start, end));
}

/**
 * check_palindrome - checks palindrome
 * @start: start point
 * @end: end point
 * Return: 1 if true and 0 otherwise
 */
int check_palindrome(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start != *end)
		return (0);

	return (check_palindrome(start + 1, end - 1));
}
