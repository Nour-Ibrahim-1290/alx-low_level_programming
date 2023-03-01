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

		while ((int)*str == 32 || (int)*str == 44
				|| (int)*str == 59 || (int)*str == 46
				|| (int)*str == 33 || (int)*str == 63
				|| (int)*str == 34 || (int)*str == 40
				|| (int)*str == 41 || (int)*str == 9
				|| (int)*str == 123 || (int)*str == 125
				|| (int)*str == 10)
		{
			str++;
			if (*str <= 'z' && *str >= 'a')
				*str -= 32;
		}
		str++;
	}

	return (ptr);
}
