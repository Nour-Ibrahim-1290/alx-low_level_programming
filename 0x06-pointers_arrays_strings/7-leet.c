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
	int i;
	char *ptr = str;
	char sub[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (*str != '\0')
	{
		for (i = 0; i < 8; i++)
		{
			if (*str == sub[i] || *str == (sub[i] + 32))
			{
				*str = i + '0';
				break;
			}
		}
		str++;
	}

	return (ptr);
}
