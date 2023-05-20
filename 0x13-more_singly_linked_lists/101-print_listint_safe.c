#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_listint_safe - print all nodes of a LinkedList
 * @head: head of Linked List
 *
 * Return: size of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, len = 0;

	if (head == NULL)
		exit(98);

	/** It's a Lopped List Probelm, That's Why normal solutions 
	 * won't work*/
	printf("Inside Func.\n");
	len = listint_len(head);

	printf("%d",(int)len);
	while (count < len)
	{
		printf("In While ....");
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	if (len == (count + 1))
		printf("[%p] %d\n", (void *)head, head->n);

	return (count);
}
