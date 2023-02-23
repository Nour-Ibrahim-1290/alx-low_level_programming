#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Alawys 0
 */

int main(void)
{
	long a, b, sum;

	a = 1;
	b = 2;
	sum = b;

	while (b < 4000000)
	{
		b += a;
		a = b - a;
		if (b % 2 == 0)
			sum += b;
	}

	printf("%ld\n", sum);

	return (0);
}
