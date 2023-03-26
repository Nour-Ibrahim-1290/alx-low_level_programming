#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdarg.h>

/**
 * struct d_type - strcuture of pointers to function to
 * match character with data typr to print
 * @id: character to match
 * @f: function to use for printing
 */
typedef struct d_type
{
	char id;
	void (*f)(va_list arg);
} d_type;

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
