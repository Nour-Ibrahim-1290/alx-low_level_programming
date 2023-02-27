#include "main.h"

/**
 * _strlen - Entry Point
 *
 * Description: return the length of a string
 * @s: string - char array
 *
 * Return: void
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
