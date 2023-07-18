#include <stdio.h>

/**
 * main - prints __putchar
 *
 * Return: returns printed value
 */
void __putchar()
{
	int str;
	char print[] = "_putchar";

	str = 0;
	while (str < 9)
	{
		putchar(print[str]);
		str++;
	}
	putchar('\n');
}
