#include <stdlib.h>
#include "lists.h"

/**
 * list_len - count all nodes of a LinkedList
 * strting with head to tail nodes
 * @h: head of Linked List
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
