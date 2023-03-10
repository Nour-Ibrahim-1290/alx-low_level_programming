#include <stdio.h>
#include <stdlib.h>

/**
 * main - count change coins in an amount
 * change in EG are 1, 5, 10, 25, 50
 *
 * @argc: count of commands/arguments
 * @argv: array of commands/arguments
 *
 * Return: Alawys 0.
 */

int main(int argc, char *argv[])
{
	int amount, counter, i;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		counter = 0;

		while (amount > 0)
		{
			for (i = 0; i < 5; i++)
			{
				while (amount / change[i] > 0 && amount != 0)
				{
					amount -= change[i];
					counter++;
				}
				if (amount <= 0)
					break;
			}
		}

		printf("%d\n", counter);
	}

	return (0);
}
