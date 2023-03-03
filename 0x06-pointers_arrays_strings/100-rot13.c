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
	int i, flag, k;

	i = 0;
	while (*(str + i) != '\0')
	{
		k = 1;
		if ((*(str + i) >= 97 && *(str + i) <= 109)
				|| (*(str + i) >= 65 && *(str + i) <= 77))
		{
			*(str + i) += 13;
			k = 0;
		}
		flag = 1;
		while (((*(str + i) > 109 && *(str + i) <= 122 && k)
					|| (*(str + i) > 78 && *(str + i) <= 90 && k)) && flag)
		{
			*(str + i) -= 13;
			flag = 0;
		}
		i++;
	}
	return (str);
}
