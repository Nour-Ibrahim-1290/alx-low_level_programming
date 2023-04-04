#include <stdlib.h>
#include "lists.h"


/**
 * listint_len - count all nodes of a LinkedList
 * @head: head of Linked List
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}

/**
 * insert_nodeint_at_index - add new node at an index in LinkedList
 * @head: pointer to the head of Linked List
 * @n: int value of the new node to add
 * @idx: index to add the node at
 *
 * Return: pointer to head node of list_t list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *node = *head;
	unsigned int at = 0, len = listint_len(*head);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx >= len)
		return (NULL);

	while (at != (idx - 1))
	{
		node = node->next;
		at++;
	}

	new_node->next = node->next;
	node->next = new_node;

	return (node);
}


