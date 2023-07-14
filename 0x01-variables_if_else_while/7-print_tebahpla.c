#include <stdio.h>

/**
 * main - prints alphabets in reverse
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i;

	for (i = 25; i >= 0; i--)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
