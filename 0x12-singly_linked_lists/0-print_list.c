#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print all nodes of a LinkedList
 * strting with head to tail nodes
 * @head: head of Linked List
 *
 * Return: size of list
 */
size_t print_list(const list_t *head)
{
	size_t count = 0;

	while (head)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		count++;
		head = head->next;
	}

	return (count);
}
