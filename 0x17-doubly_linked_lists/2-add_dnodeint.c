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

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	node->prev = NULL;

	*head = node;

	return (node);
}
