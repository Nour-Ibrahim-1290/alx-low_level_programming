#include "main.h"

/**
 * clear_bit - set a bit to 0 at a specific index
 * @n: unsigned long int to set the bit at
 * @index: index of bit to change
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);

}
