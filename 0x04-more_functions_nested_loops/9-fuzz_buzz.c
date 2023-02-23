#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints fizz buzz with numbers :)
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf(" FizzBuzz");
			else
				printf(" Fizz");
		}
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
