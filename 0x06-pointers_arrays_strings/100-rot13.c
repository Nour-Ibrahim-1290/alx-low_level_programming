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
	int i, flag;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 97 && *(str + i) <= 109)
				|| (*(str + i) >= 65 && *(str + i) <= 77))
		{
			*(str + i) += 13;
		}
		flag = 1;
		while (((*(str + i) > 109 && *(str + i) <= 122)
					|| (*(str + i) > 78 && *(str + i) <= 90)) && flag)
		{
			*(str + i) -= 13;
			flag = 0;
		}
		i++;
	}
	return (str);
}
