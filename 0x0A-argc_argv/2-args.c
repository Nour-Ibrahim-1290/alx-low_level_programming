#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments of a progarm
 * @argc: number of commands
 * @argv: array of commands
 * Return: Alawys 0.
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);

	return (0);
}
