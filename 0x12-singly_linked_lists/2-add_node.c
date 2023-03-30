#include <stdlib.h>
#include <string.h>
#include "lists.h"

int _strlen(const char *str);
list_t *add_node(list_t **head, const char *str);

/**
 * add_node - count all nodes of a LinkedList
 * strting with head to tail nodes
 * @head: head of Linked List
 * @str: string value of the new tode to add
 *
 * Return: pointer to head node of list_t list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = (list_t *) malloc(sizeof(list_t));

	if (str == NULL)
	{
		node->str = strdup("(nil)");
		node->len = 0;
	}
	else
	{
		node->str = strdup(str);
		node->len = _strlen(str);
	}
	node->next = *head;

	*head = node;

	return (node);
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
