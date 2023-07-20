#include <stdio.h>
#include "main.h"

/**
 * main - checks if number is positive, negative or zero
 *
 * Return: returns 0 (success)
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

}
