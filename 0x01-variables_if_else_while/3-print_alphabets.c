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
		putchar((char)i);

	for (i = 65; i <= 90; i++)
		putchar((char)i);

	putchar('\n');

	return (0);
}
