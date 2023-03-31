#include <stdlib.h>
#include "lists.h"

/*
 * free_list - frees a list_t LinkedList.
 * @head: pointer to first node
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
