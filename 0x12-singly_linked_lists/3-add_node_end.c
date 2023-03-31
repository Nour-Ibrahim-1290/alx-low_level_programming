#include <stdlib.h>
#include <string.h>
#include "lists.h"

int _strlen(const char *str);
list_t *add_node_end(list_t **head, const char *str);

/**
 * add_node_end - add new node to end of LinkedList
 * @head: head of Linked List
 * @str: string value of the new node to add
 *
 * Return: pointer to head node of list_t list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = (list_t *) malloc(sizeof(list_t));
	list_t *tail;
	char *dup;

	if (node == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(node);
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(node);
		return (NULL);
	}

	node->str = dup;
	node->len = _strlen(str);
	node->next = NULL;

	/*move to tail of LinkedList*/
	if (*head == NULL)
		*head = node;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = node;
	}

	return (*head);
}


/**
 * _strlen - length of string
 * @str: string
 *
 * Return: int len
 */
int _strlen(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}
