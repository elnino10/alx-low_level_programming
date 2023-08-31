#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rev, num, count, old_num;

	rev = count = num = 0;
	old_num = *n;

	if (index > 63)
		return (-1);

	while (count < 63)
	{
		rev = rev << 1;
		if (count == index)
			rev += 0;
		else
			rev += old_num & 1;
		count++;
		old_num = old_num >> 1;
	}

	while (count > 0)
	{
		num = num << 1;
		num += rev & 1;
		rev = rev >> 1;
		count--;
	}
	*n = num;

	return (1);
}
