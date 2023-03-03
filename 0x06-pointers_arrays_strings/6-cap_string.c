#include "main.h"

/**
 * cap_string - Entry Point
 *
 * Description: Capatalize words
 * Separators are (, ; . ! ? \" ( ) { } and space)
 * @str: string to change
 *
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	char sep[] = {',', ';', '.', '!', '?', '"', '(', ')', '\n', ' ', '\t'};
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		int j = 0;

		for (; j < 11; j++)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				if (i == 0 || str[i - 1] == sep[j])
				{
					str[i] -= 32;
				}
			}
		}
	}

	return (str);
}
