#ifndef LISTS
#define LISTS

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of string
 * @next: points to the next node
 *
 * Description: singly linked lists node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


#include <stddef.h>

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
int _putchar(char ch);

#endif
