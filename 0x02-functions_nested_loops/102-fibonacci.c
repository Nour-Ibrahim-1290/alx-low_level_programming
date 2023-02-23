#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Alawys 0
 */

int main(void)
{
	long f[50];
	int i;

	f[0] = 1;
	f[1] = 2;
	printf("%ld, %ld, ", f[0], f[1]);

	for (i = 2; i < 49; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		if (f[i] < 0)
		{
			f[i] *= -1;
		}
		printf("%ld, ", f[i]);
	}

	f[49] = f[48] + f[47];
	printf("%ld\n", f[49]);

	return (0);
}
