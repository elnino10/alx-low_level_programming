#include<unistd.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char errMsg[] = "and that piece of art is useful\" \
			 - Dora Korpar, 2015-10-19\n";
	write(2, &errMsg, sizeof(errMsg) - 1);
	return (1);
}
