#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Alwyas 0.
 */

int main(void)
{
	char *s = "hello, world";
	char *f = "nour";
	char *t;

	t = _strstr(s, f);

	if (t == NULL)
		printf("t is NULL\n");
	else
		printf("t is Error!!\n");
	printf("%s\n", t);

	return (0);
}
