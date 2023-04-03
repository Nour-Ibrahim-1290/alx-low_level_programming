#include <stdlib.h>
#include "lists.h"

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
	unsigned int at = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = node;
		*head = new_node;
		return (new_node);
	}

	/*move to idx of LinkedList*/
	while (node)
	{
		at++;
		if (node == NULL || node->next == NULL)
			return (NULL);
		if (idx == at)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		node = node->next;
	}

	return (NULL);
}


