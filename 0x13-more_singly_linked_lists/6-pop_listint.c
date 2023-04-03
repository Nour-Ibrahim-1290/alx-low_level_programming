#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - pop the node at the beginning
 * @head: head of Linked List
 *
 * Return: value of poped head
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int value = 0;

	if (*head == NULL)
		return (value);

	node = *head;
	value = (*head)->n;

	*head = (*head)->next;

	free(node);

	return (value);
}
