#include "hash_tables.h"

/**
 * hash_table_get - gets value associated with a key from hash table
 * @ht: hash table to get from
 * @key: key to retrive its value
 *
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if ((!key) || (key[0] == '\0') || (!ht))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}

	return (NULL);
}
