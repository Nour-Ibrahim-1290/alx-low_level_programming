#include "main.h"

/**
 * set_string - change pointer to a pointer to a char
 *
 * @s: pointer to pointer
 * @t: pointer to change to
 *
 * Return: void
 */

void set_string(char **s, char *t)
{
	*s = t;
}
