#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
