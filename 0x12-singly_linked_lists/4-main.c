#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Alawys 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;

	add_node_end(&head, "Anne");
	add_node_end(&head, "&");
	add_node_end(&head, "Corbin");
	add_node_end(&head, "love");
	add_node_end(&head, "Danton");
	print_list(head);
	free_list(head);
	head = NULL;

	return (0);
}
