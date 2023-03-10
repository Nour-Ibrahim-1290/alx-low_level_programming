#include "main.h"
#include <stdio.h>

/**
 * _strcat - Entry Point
 *
 * Description: concatenate 2 strings
 * @s1: first string
 * @s2: 2nd string
 *
 * Return: void
 */

char *_strcat(char *s1, char *s2)
{
	char *concat = s1;

	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);

	while (*concat != '\0')
	{
		concat++;
	}

	while (*s2 != '\0')
	{
		*concat++ = *s2++;
	}

	*concat = '\0';

	return (s1);
}
