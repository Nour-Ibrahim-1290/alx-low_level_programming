#include "main.h"
#include <stddef.h>
/**
 * _strncpy - Entry Point
 *
 * Description: copy strings with max n bytes from s2
 * @s1: first string
 * @s2: 2nd string
 * @n: length to stop at
 *
 * Return: void
 */

char *_strncpy(char *s1, char *s2, int n)
{
	int i = 0;

	if (s2 == NULL)
		return (NULL);

	while (i < n && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}

	while (i < n)
		s1[i++] = '\0';

	return (s1);
}
