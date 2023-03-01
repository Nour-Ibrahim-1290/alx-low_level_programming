#include "main.h"

/**
 * string_toupper - Entry Point
 *
 * Description: Change all lowercase letters into uppercase
 * @str: string to change
 *
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str <= 'z' && *str >= 'a')
			*str = *str - 32;
		str++;
	}

	return (ptr);
}
