#include "lists.h"
#include <unistd.h>
/**
 * _putchar - write a single char on stdout
 * @ch: char to write
 *
 * Return: 1 for Success.
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
