#include <unistd.h>

/**
 *main - prints __putchar
 *
 * Return: returns printed value
 */
int main(void)
{
	char text[] = "_putchar\n";

	write(1, &text, sizeof(text) - 1);
	return (0);
}
