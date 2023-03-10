#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the arguments passed into it
 * @argc: number of commands
 * @argv: array of commands
 * Return: Alawys 0.
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (--argc)
	{
		*argv += 1;
		i++;
	}
	printf("%d\n", i);
	exit(EXIT_SUCCESS);

	return (0);
}
