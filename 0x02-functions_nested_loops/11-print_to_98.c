#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry Point
 *
 * Description: Printing Numbers from n to 98
 *
 * @n: Int to print from
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}
	else
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}
}
