#include "_putchar.h"
/**
 *main - prints __putchar
 *
 * Return: returns printed value
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	i = 0;
	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
