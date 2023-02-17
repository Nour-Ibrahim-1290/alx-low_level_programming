#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Alawys zero
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (((char)i) != 'q' && ((char)i != 'e'))
			putchar((char)i);
	}

	putchar('\n');

	return (0);
}
