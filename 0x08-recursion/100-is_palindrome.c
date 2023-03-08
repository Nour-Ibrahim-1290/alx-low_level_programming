#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * ispal - checking if s is palindrome
 *
 * @s: string to check
 * @len: length of string s
 * @i: index where the string
 *
 * Return: int flag
 */

int ispal(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (ispal(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - Entry point to factor in the index i
 *
 * @s: string to check
 *
 * Return: int flag
 */

int is_palindrome(char *s)
{
	return (ispal(s, strlen(s), 0));
}
