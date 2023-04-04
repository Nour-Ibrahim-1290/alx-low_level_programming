#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at an index in LinkedList
 * @head: pointer to the head of Linked List
 * @index: index to add the node at
 *
 * Return: pointer to head node of list_t list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node = *head;
	unsigned int at = 0;

	if (node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	/*move to idx of LinkedList*/
	while (node->next)
	{
		at++;
		if (index == at)
		{
			temp = node->next;
			node->next = temp->next;
			free(temp);
			return (1);
		}
		node = node->next;
	}

	return (-1);
}


