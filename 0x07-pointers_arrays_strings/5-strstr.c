#include "main.h"
#define NULL ((void *)0)

/**
 * match - match s2 from a specific beginning of s1
 * @s1: string to match
 * @s2: string to match with
 *
 * Return: int
 */

int match(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}

	return (*s2 == '\0');
}

/**
 * _strstr - Entry Point
 *
 * Description: Find the first occurance of the substring
 * needle in the string haystack.
 * @heystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to substring
 */

char *_strstr(char *heystack, char *needle)
{
	if (*needle == 0)
		return (heystack);
	while (*heystack != '\0')
	{
		if ((*heystack == *needle) && match(heystack, needle))
			return (heystack);
		heystack++;
	}

	return ('\0');
}
