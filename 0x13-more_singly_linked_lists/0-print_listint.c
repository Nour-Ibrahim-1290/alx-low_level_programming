#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all nodes of a LinkedList
 * @head: head of Linked List
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		return (count);

	while (head)
	{
		/*assign str and len to print*/
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}

	return (count);
}
