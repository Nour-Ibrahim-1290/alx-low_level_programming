#include "main.h"

/**
 * rev_string - Entry Point
 *
 * Description: replace a string with its reverse
 * @str: string - char array
 *
 * Return: void
 */

void rev_string(char *str)
{
	int len, i;
	char temp;

	len = 0;
	i = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
