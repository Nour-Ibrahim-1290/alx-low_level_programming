#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print 2 digit number combinations
 *
 * Return: Alawys zero
 */

int main(void)
{

	/* Lowercase Alphabet */
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if ((char)i != '8' || (char)j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
