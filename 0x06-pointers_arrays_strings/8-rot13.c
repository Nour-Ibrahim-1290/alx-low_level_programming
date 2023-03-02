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
	int i = 0;

	while (str[i])
	{
		if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] = str[i] - 13;
		else if ((str[i] >= 'A' && str[i] < 'N') || (str[i] >= 'a' && str[i] < 'n'))
			str[i] = str[i] + 13;
		i++;
	}

	return (str);
}
