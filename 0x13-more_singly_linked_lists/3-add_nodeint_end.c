#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node to end of LinkedList
 * @head: head of Linked List
 * @n: int value of the new node to add
 *
 * Return: pointer to head node of list_t list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *tail;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	/*move to tail of LinkedList*/
	if (*head == NULL)
		*head = node;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = node;
	}

	return (*head);
}


