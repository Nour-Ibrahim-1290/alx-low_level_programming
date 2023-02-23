#include <stdio.h>

/**
 * main - Entry Point
 *
 * ReturnL Always 0.
 */

int prime_factors(int);
int max(int[]);

int main(void)
{
	long num = 612852475143;
	long d = 2;
	long max = 0;

	while (num != 1)
	{
		if (num % d == 0)
		{
			num = num / d;
			max = d;
		}
		d += 1;
	}
	printf("%ld\n", max);

	return (0);
}
