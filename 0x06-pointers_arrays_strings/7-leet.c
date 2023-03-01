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
	char code[] = {'4', '3', '0', '7', '1'};

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			printf("%c, %c\n", *str, *str + 32);
			if ((*str == sub[i]) || ((*str - 32) == sub[i]))
			{
				*str = code[i];
				break;
			}
		}
		str++;
	}

	return (ptr);
}
