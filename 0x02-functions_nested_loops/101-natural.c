#include <stdio.h>

/**
 * main - prints sum of multiples of 3 and 5 in 1024
 */
int main(void)
{
	int n, m, sum, sum3, sum5;

	sum = 0;
	sum3 = 0;
	sum5 = 0;
	for (n = 1, m = 1; n < k; n++, m++)
	{
		if (3*n < k)
			sum3 += 3 * n;
		if (5*m < k)
			sum5 += 5 * m;
	}
	sum = sum3 + sum5;
	printf("%d\n", sum);
	return (0);
}
