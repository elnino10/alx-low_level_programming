#include <stdio.h>

/**
 * main - prints alphabets in lower case and then in upper case
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char alphaUp[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int i;

	for (i = 0; i < 26; i++)
		putchar(alpha[i]);
	for (i = 0; i < 26; i++)
		putchar(alphaUp[i]);
	putchar('\n');
	return (0);
}
