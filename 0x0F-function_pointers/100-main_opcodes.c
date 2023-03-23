#include <stdio.h>
#include <stdlib.h>

/**
 * main - print optocdes of main
 * @argc: #arguments to from the standard input
 * @argv: array of arguments
 *
 * Return: Alawys 0.
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	int (*add)(int, char **) = main;
	unsigned char op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		op = *(unsigned char *)add;
		printf("%.2x", op);

		if (i == bytes - 1)
			continue;
		printf(" ");

		add++;
	}

	printf("\n");

	return (0);
}
