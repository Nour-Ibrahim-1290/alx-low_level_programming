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
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = j+1; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					if ((char)i != '9' || (char)k != '9' || (char)j != '8' || (char)l != '9')
					{
						putchar(',');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
