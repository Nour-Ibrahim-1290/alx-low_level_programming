#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Alawys 0
 */

int main(void)
{
	int f[50];
	int i;

	f[0] = 1;
	f[1] = 2;
	printf("%d, %d, ", f[0], f[1]);

	for (i = 2; i < 49; i++)
	{
		f[i] = f[i-1] + f[i-2];
		printf("%d, ", f[i]);
	}

	f[49] = f[48] + f[47];
	printf("%d\n", f[49]);

	return (0);
}
