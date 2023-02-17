#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: display all alphabet in lowercase in reverse
 *
 * Return: Alawys zero
 */

int main(void)
{

	/* Lowercase Alphabet */
	int i;

	for (i = 122; i >= 97; i--)
		putchar((char)i);

	/* New Line */
	putchar('\n');

	return (0);
}
