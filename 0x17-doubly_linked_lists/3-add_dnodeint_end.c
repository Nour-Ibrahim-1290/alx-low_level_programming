#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add new node to end of DoubleLinkedList
 * @head: head of Double Linked List
 * @n: int value of the new node to add
 *
 * Return: pointer to head node of list_t list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *tail;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	tail = *head;

	/*move to tail of DoubleLinkedList*/
	if (tail != NULL)
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = node;
	}

	if (tail == NULL)
		*head = node;

	node->prev = tail;

	return (node);
}
