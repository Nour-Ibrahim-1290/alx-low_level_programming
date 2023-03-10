#include "main.h"
#include <stddef.h>
/**
 * _strncat - Entry Point
 *
 * Description: concatenate 2 strings with max n bytes from s2
 * @s1: first string
 * @s2: 2nd string
 * @n: length to stop at
 *
 * Return: void
 */

char *_strncat(char *s1, char *s2, int n)
{
	int i;
	char *concat = s1;

	i = 0;

	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);

	while (*concat != '\0')
		concat++;

	while ((*s2 != '\0'))
	{
		i++;
		if (i > n)
			break;
		*concat++ = *s2++;
	}

	*concat = '\0';

	return (s1);
}
