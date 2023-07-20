#include <stdio.h>

/**
 * main - print numbers 1 to 100, for multiples of 3 print Fizz
 *and for multples of 5 print Buzz, and for both, FizzBuzz
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
