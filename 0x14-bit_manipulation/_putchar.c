#include <unistd.h>
#include "main.h"

/**
 * _putchar - print 1 char
 * @ch: char to print
 *
 * Return: 1 for Success
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
