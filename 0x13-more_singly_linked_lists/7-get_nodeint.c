#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return a node at a certain index
 * @head: head of Linked List
 * @index: index where the node we want at
 *
 * Return: size of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int at = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (at == index)
			return (head);
		at++;
		head = head->next;
	}

	return (NULL);
}
