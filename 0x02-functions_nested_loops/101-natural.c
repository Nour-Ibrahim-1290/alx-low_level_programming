#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Calculate the sum of all numbers
 * dividable by wither 3 or 5 up to 1024 (excluded)
 *
 * Return: Alawys 0
 */

int main(void)
{
	int i, sum;
	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	
	printf("%d\n", sum);

	return (0);
}
