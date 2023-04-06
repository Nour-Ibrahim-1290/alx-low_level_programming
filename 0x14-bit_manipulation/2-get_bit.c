#include "main.h"

/**
 * get_bit - get a bit in int format at a specific index
 * @n: unsogned long int to retrieve the bit from
 * @index: index of bit to retireve
 *
 * Return: bit in int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);

}
