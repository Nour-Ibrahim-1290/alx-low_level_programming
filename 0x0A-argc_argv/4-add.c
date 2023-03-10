#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - print the add of all the arguments
 * @argc: number of commands
 * @argv: array of commands
 * Return: Alawys 0.
 */

int main(int argc, char **argv)
{
	int i, j, len, sum;
	char *ptr;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	exit(EXIT_SUCCESS);

	return (0);
}
