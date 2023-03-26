#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"



void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_str(va_list);
void print_all(const char * const, ...);

/**
 * print_char -print charcater
 * @arg: va_list argument
 *
 * Return: void
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}


/**
 * print_int -print integer number
 * @arg: va_list argument
 *
 * Return: void
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}


/**
 * print_float -print float number
 * @arg: va_list argument
 *
 * Return: void
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}


/**
 * print_str -print string
 * @arg: va_list argument
 *
 * Return: void
 */
void print_str(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");
}


/**
 * print_all - print all the agruments given to function
 * with the given separator in place
 *
 * @format: arguments datatype identifiers
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list arg;
	char *sep = "";
	d_type data_type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
	};

	if (format != NULL)
	{
		va_start(arg, format);

		while (format[i])
		{
			j = 0;
			while (j < 4 && format[i] != data_type[j].id)
				j++;

			if (j < 4)
			{
				printf("%s", sep);
				data_type[j].f(arg);
				sep = ", ";
			}
			i++;
		}
	}

	printf("\n");
	va_end(arg);
}
