#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: display all alphabet in lowercase using putchar
 *
 * Return: Alawys zero
 */

int main(void)
{

	/* Lowercase Alphabet */
	int i;

	for (i = 97; i <= 122; i++)
		putchar((char)i);

	/* New Line */
	putchar((char)10);

	return (0);
}
