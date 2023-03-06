#include "main.h"
#include <string.h>

/**
 * _strpbrk - Entry Point
 *
 * Description: Locates the first occurance in the string s
 * of any of the bytes in the string accept
 * @s: string to search in
 * @accept: charcaters to include
 *
 * Return: pointer to the substring
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
			return (s);
		s++;
	}

	return (NULL);
}
