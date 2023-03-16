#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Author: Nour M. Ibrahim
 * Desc: Header file containing the prototypes of all functions
 *		included in malloc_free dir
 */

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
