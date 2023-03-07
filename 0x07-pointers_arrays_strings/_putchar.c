#include <unistd.h>

/**
 * _putchar - print a char
 *
 * @c: char
 *
 * Return: void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
