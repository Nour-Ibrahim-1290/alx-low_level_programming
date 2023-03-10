#include "main.h"

/**
 * _isdigit - checks if a char is a digit or not
 *
 * @c: character to check
 *
 * Return: 1 Success.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
