#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiblication of a and b
 * @argc: number of commands
 * @argv: array of commands
 * Return: Alawys 0.
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	exit(EXIT_SUCCESS);

	return (0);
}
