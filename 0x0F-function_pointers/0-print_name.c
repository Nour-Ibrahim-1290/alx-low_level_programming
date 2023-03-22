#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name with a style
 *
 * @name: name to print
 * @f: function to apply the style and print
 *
 * Return: void.
 */

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
