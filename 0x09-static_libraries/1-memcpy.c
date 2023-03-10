#include "main.h"

/**
 * _memcpy - Entry Point
 *
 * Description: Copies n characters from src to dest
 * @dest: string to copy into
 * @src: string to copy from
 * @n: how many times to copy
 *
 * Return: void
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*(dest++) = *(src++);
	}

	return (p);
}
