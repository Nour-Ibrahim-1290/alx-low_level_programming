#include "main.h"


/**
 * flip_bits - count the number of bits needs to be flipped
 * to get from n to m
 * @n: number
 * @m: number
 *
 * Return: unsigned int #bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bits = 0;

	while (xor > 0)
	{
		bits += xor & 1;
		xor >>= 1;
	}

	return (bits);
}
