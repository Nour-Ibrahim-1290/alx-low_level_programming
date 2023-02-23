#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Alawys 0
 */

int main(void)
{
	unsigned long a, b;
	int i;

	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);

	for (i = 3; i < 98; i++)
	{
		b += a;
		a = b - a;

		printf("%lu, ", b);
	}

	b += a;
	printf("%lu\n", b);

	return (0);
}
