#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Alawys 0.
 */

int main(void)
{
	char s[] = "Expect the best. Prepare for the worest. Capatalize on what comes.\n";
	char *p;

	printf("%s\n", s);
	p = leet(s);
	printf("%s", p);
	printf("%s", s);

	return (0);
}
