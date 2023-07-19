#include "main.h"

/**
 * print_times_table - print n times table for n less than 15
 * @n: parameter to work with
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = j * i;
				if (prod >= 10)
				{
					if (prod < 100)
					{
						_putchar(' ');
						_putchar('0' + (prod / 10));
						_putchar('0' + (prod % 10));
					}
					else
					{
						_putchar('0' + (prod / 10 / 10));
						_putchar('0' + (prod / 10 % 10));
						_putchar('0' + (prod % 10));
					}
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod);
				}

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
