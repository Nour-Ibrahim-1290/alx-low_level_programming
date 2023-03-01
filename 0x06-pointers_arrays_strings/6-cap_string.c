#include "main.h"

/**
 * cap_string - Entry Point
 *
 * Description: Capatalize words
 * Separators are (, ; . ! ? \" ( ) { } and space)
 * @str: string to change
 *
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] <= 'z' && str[i] >= 'a'))
			i++;

		if (str[i - 1] == ' ' || str[i - 1] == ','
				|| str[i - 1] == ';' || str[i - 1] == '.'
				|| str[i - 1] == '!' || str[i - 1] == '?'
				|| str[i - 1] == '"' || str[i - 1] == '('
				|| str[i - 1] == ')' || str[i - 1] == '\t'
				|| str[i - 1] == '{' || str[i - 1] == '}'
				|| str[i - 1] == '\n')
			str[i] -= 32;
		i++;
	}

	return (str);
}
