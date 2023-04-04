#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all nodes of a LinkedList
 * strting with head to tail nodes
 * @h: head of Linked List
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}

	return (count);
}
