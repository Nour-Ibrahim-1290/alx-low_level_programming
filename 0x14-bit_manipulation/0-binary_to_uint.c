#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of string
 * @b: string of chars
 *
 * Return: int length of string
 */
int _strlen(const char *b)
{
	unsigned int len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	return (len);
}

/**
 * binary_to_uint - convert a binary num in string format
 * to decimal integer
 * @b: string binary
 *
 * Return: decimal version in int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i = 0, len = _strlen(b) - 1;

	if (b == NULL)
		return (0);

	while (len >= 0)
	{
		if (b[len] == '1')
			uint += 1 << i;
		else if (b[len] != '0')
			return (0);
		i++;

		if (len == 0)
			break;
		len--;
	}

	return (uint);
}
