#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: display all numbers of base 10 in Style
 *
 * Return: Alawys zero
 */

int main(void)
{

	/* Lowercase Alphabet */
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar((char)i);

		if ((char)i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
