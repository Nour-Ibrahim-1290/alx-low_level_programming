#include "hash_tables.h"


/**
 * hash_table_create - create a new hash table
 * @size: size of the array
 *
 * Return: pointer to new hash_table, NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* Create a hash table with size as the size of the array*/
	hash_table_t *new_table;
	unsigned long int i;

	/* Cannot create hash_table with size less than one*/
	if (size < 1)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
