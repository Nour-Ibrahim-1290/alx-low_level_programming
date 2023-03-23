#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check my code
 * @argc: the number of arguments to main from standard input
 * @argv: array of arrguments to main from standard input
 *
 * Return: Alawys 0.
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
