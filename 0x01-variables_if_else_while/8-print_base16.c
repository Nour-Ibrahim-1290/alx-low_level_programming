#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: display all numbers of base 16
 *
 * Return: Alawys zero
 */

int main(void)
{

	/* Lowercase Alphabet */
	int i;

	for (i = 48; i <= 57; i++)
		putchar((char)i);

	for (i = 97; i <= 104; i++)
		putchar((char)i);

	/* New Line */
	putchar('\n');

	return (0);
}
