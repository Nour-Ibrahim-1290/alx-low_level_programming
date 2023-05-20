#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 * of an int DoublyLinkedList
 * @head: head of Linked List
 * @n: int value of the new tode to add
 *
 * Return: pointer to head node of list_t list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	node->next = h;

	if (h != NULL)
		h->prev = node;

	*head = node;

	return (node);
}
