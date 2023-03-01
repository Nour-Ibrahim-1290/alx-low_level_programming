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
	char *ptr = str;

	while (*str != '\0')
	{
		while (*str == ' ' || *str == ',' || *str == ';' || *str == '.'
				|| *str == '!' || *str == '?' || *str == '"'
				|| *str == '(' || *str == ')' || *str == '\t'
				|| *str == '{' || *str == '}' || *str == '\n')
		{
			str++;
			if (*str <= 'z' && *str >= 'a')
				*str = *str - 32;
		}
		str++;
	}

	return (ptr);
}
