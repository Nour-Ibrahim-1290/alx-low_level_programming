#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all nodes of a DoublyLinkedList
 * strting with head to tail nodes
 * @h: head of Linked List
 *
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
