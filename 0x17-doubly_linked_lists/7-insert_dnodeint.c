#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - get node at a predefined index
 * @h: head of Linked List
 * @idx: index to retrive the node from
 * @n: value of the new node
 *
 * Return: dnode
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node = NULL, *head;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		while (head->prev != NULL) /*make sure I'm at head*/
			head = head->prev;

		while (head)
		{
			if (idx == count)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->prev = head->prev;
						new_node->next = head;
						head->prev->next = new_node;
						head->prev = new_node;
					}
				}
				break;
			}
			count++;
			head = head->next;
		}
	}
	return (new_node);
}
