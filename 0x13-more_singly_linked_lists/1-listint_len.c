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
