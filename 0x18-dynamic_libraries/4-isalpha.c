#include "main.h"

/**
 * _isalpha - Entry Point
 *
 * Description: Check whether a character is a letter
 *
 * @c: integer value of char to check whether
 * lowercase letter or not
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
