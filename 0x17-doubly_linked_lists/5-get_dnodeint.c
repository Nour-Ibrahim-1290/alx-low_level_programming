#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a predefined index
 * @head: head of Linked List
 * @idx: index to retrive the node from
 *
 * Return: dnode
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int idx)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (idx == count)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL);
}
