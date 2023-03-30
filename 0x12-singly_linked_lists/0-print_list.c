#include <stdlib.h>
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
	char *str;
	unsigned int len, i;
	size_t count = 0;

	while (h)
	{
		/*assign str and len to print*/
		str = h->str;
		if (str == NULL)
		{
			str = "(nil)";
			len = 0;
		}
		else
		{
			len = h->len;
		}
		_putchar('[');
		_putchar(len + '0');
		_putchar(']');
		_putchar(' ');

		/*print str*/
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
		count++;
		h = h->next;
	}

	return (count);
}
