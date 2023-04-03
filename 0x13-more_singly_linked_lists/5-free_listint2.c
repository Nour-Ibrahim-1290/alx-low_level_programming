#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t LinkedList.
 * @head: pointer to first node
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (*head == NULL)
		return;
	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	head = NULL;
}
