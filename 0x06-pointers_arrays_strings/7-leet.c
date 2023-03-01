#include "main.h"
#include <stdio.h>

/**
 * leet - Entry Point
 *
 * Description: Cypher Code :)
 * @str: string to change encode
 *
 * Return: pointer to string
 */

char *leet(char *str)
{
	char *ptr = str;
	int i;
	char sub[] = {'A', 'E', 'O', 'T', 'L'};
	char sub2[] = {'a', 'e', 'o', 't', 'l'};
	char code[] = {'4', '3', '0', '7', '1'};

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			printf("%c, ", *str);
			printf("\n");

			if (*str == sub[i] || *str == sub2[i])
			{
				*str = code[i];
				break;
			}
		}
		str++;
	}

	return (ptr);
}
