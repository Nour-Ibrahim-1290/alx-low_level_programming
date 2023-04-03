#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum values of all nodes
 * @head: head of Linked List
 *
 * Return: sum of nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
