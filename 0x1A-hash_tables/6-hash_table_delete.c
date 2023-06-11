#include "hash_tables.h"

/**
 * hash_table_delete - delete all elemets in hash table
 * @ht: hash table to delete
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int counter;
	hash_node_t *temp, *element;

	if (ht == NULL)
		return;

	for (counter = 0; counter < ht->size; counter++)
	{
		if (ht->array[counter] != NULL)
		{
			temp = ht->array[counter];
			while (temp != NULL)
			{
				element = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = element;
			}
		}
	}
	free(ht->array);
	free(ht);
}
