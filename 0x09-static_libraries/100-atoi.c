#include "main.h"
#include <stdio.h>

/**
 * _atoi - Entry Point
 *
 * Description: prints elemnts of array unti n
 * @s: array
 *
 * Return: void
 */

int _atoi(char *s)
{
	int num, i;

	num = 0;
	i = 0;

	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num);
}
