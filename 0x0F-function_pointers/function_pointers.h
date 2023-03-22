#ifndef FUNCTION_P_H
#define FUNCTION_P_H

#include <stdio.h>

void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));
int int_index(int *, int, int (*)(int));

#endif
