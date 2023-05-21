#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - get node at a predefined index
 * @h: head of Linked List
 * @idx: index to retrive the node from
 *
 * Return: dnode
 */

int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	unsigned int count = 0;
	int flag = -1;
	dlistint_t *head;

	if (*h == NULL)
		return (flag);
	head = *h;
	if (idx == 0)
	{
		*h = head->next;
		head = NULL;
		if (*h != NULL)
		{
			(*h)->prev = NULL;
			flag = 1;
		}
	}
	else
	{
		while (head->prev != NULL) /*make sure I'm at head*/
			head = head->prev;
		while (head)
		{
			if (idx == count)
			{
				if (head->next == NULL)
					head = NULL;
				else
				{
					head->prev->next = head->next;
					head->next->prev = head->prev;
					head = NULL;
				}
				flag = 1;
				break;
			}
			count++;
			head = head->next;
		}
	}
	return (flag);
}
