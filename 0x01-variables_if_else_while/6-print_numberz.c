#include <stdio.h>

/**
 * main - print numbers using putchar function
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(48 + num);
	putchar('\n');
	return (0);
}
