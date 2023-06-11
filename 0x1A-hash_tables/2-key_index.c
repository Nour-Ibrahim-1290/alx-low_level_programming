#include "hash_tables.h"


/**
 * key_index - generate index using hash_djb2
 * @key: pointer to key
 * @size: size of main hash array
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
