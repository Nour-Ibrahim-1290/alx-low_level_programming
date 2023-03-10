#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Entry Point
 *
 * Description: Searches for the first occurances of the character c
 * in the string str
 * @str: string to search in
 * @c: charcater to search for
 *
 * Return: void
 */

char *_strchr(char *str, char c)
{
	char *flag = NULL;

	do {
		if (*str == c)
		{
			flag = str;
			break;
		}
	} while (*str++);

	return (flag);
}
