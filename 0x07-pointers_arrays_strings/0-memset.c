#include "main.h"

/**
 * _memset - Entry Point
 *
 * Description: Copies the character c to the first
 * n characters of the string str
 * @s: string to copy into
 * @b: character to copy
 * @n: how many times to copy c
 *
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*s++ = b;
	}

	return (p);
}
