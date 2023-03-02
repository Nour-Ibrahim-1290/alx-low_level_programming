#include "main.h"
#include <stdio.h>

/**
 * rot13 - Entry Point
 *
 * Description: Cypher Code :)
 * @str: string to change encode
 *
 * Return: pointer to string
 */

char *rot13(char *str)
{
	int i = 0, key = 0;

	while (str[i])
	{
		while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				key = ((str[i] - 'A') + 13) % 26;
				str[i] = 'A' + key;
			}
			else
			{
				key = ((str[i] - 'a') + 13) % 26;
				str[i] = 'a' + key;
			}
			i++;
		}
		i++;
	}

	return (str);
}
