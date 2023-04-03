#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of an int LinkedList
 * @head: head of Linked List
 * @n: int value of the new tode to add
 *
 * Return: pointer to head node of list_t list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
