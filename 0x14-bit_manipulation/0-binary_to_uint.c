#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0  if there is one or more chars in the string b
 * that is not 0 or 1, or when b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len;
	unsigned int dec_val;

	i = len = dec_val = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}

	while (i < len)
	{
		dec_val = dec_val << 1;
		if (b[i] == '1')
			dec_val += 1;
		i++;
	}

	return (dec_val);
}

