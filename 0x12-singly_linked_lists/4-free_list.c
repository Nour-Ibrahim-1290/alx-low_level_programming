#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t LinkedList.
 * @head: pointer to first node
 */

void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
		return;

	while (head)
	{
		node = head;
		free(head->str);
		head = head->next;
		free(node);
	}
}
