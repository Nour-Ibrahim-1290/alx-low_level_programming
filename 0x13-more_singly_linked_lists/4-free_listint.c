#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t LinkedList.
 * @head: pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
