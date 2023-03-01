#include "main.h"

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
	char sub[] = {'a', 'e', 'o', 't', 'l'};
	char code[] = {'4', '3', '0', '7', '1'};

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == sub[i] || (*str - 32) == sub[i])
			{
				*str = code[i];
				break;
			}
		}
		str++;
	}

	return (ptr);
}
