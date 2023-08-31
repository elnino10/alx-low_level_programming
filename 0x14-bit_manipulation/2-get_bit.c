#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int count;

	count = 0;
	if (index > 63)
		return (-1);

	while (n > 0)
	{
		if (count == index)
			return (n & 1);
		n = n >> 1;
		count++;
	}

	if (count < index)
		return (0);

	return (-1);
}
