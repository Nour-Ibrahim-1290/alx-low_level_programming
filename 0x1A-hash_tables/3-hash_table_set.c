#include "hash_tables.h"

/**
 * hash_table_set - adds new element to the hash table
 * @ht: hash table to add
 * @key: key to add
 * @value: value associated with key in a node
 *
 * Return: 1 Success. 0 Failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *element, *temp;

	if ((!key) || (key[0] == '\0') || (!ht))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	/* create node for key and value*/
	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (0);
	element->key = strdup(key);
	if (value == NULL)
		element->value = NULL;
	else
		element->value = strdup(value);
	element->next = NULL;

	/* check place of index if empty*/
	if (ht->array[index] == NULL)
		ht->array[index] = element;
	else
	{
		element->next = ht->array[index];
		ht->array[index] = element;
	}

	return (1);
}
