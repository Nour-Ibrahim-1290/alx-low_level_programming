#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a listint_t LinkedList.
 * @head: pointer to first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head == NULL)
		return;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
