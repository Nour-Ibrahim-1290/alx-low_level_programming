#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: Check whether a random number is
 * positive, negative, or zero
 *
 * Return: Always zero
 */

int main(void)
{
	/* code given by question */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* my code/solution */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);


	return (0);
}
