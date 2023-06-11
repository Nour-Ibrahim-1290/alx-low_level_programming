#include "hash_tables.h"

/**
 * hash_table_print - prints all elemets in hash table
 * @ht: hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int counter;
	hash_node_t *temp;
	unsigned int flag = 0;

	if (ht == NULL)
		return;

	if (ht->size == 0)
		printf("{}");

	printf("{");
	for (counter = 0; counter < ht->size; counter++)
	{
		temp = ht->array[counter];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			if (temp)
				printf(", ");
		}

		if (ht->array[counter] != NULL)
			flag = 1;
		if (flag == 1  && (ht->array[counter + 1] != NULL))
			printf(", ");
	}
	printf("}\n");
}
