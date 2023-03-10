#include "main.h"
#include <string.h>

/**
 * _strspn - Entry Point
 *
 * Description: Calculates the length of the initial segnemnt if s
 * which consists entierly of chracters not in accept
 * @s: string to search in
 * @accept: charcaters to include
 *
 * Return: position of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s && strchr(accept, *s++))
		len++;

	return (len);
}
