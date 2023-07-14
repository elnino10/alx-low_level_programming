#include <stdio.h>

/**
 * main - prints all base 16 numbers
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num >= 10)
			putchar(87 + num);
		else
			putchar(48 + num);
	}
	putchar('\n');
	return (0);
}
