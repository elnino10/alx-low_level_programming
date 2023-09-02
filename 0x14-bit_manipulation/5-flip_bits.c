#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int len_n, len_m, flip, store_n, store_m;

	len_n = len_m = flip = 0;
	store_n = n;
	store_m = m;
	while (n > 0)
	{
		n = n >> 1;
		len_n++;
	}
	while (m > 0)
	{
		m = m >> 1;
		len_m++;
	}
	m = store_m;
	n = store_n;
	if (len_m > len_n)
	{
		while (len_m > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			len_m--;
		}
	}
	else
	{
		while (len_n > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			len_n--;
		}
	}
	return (flip);
}
