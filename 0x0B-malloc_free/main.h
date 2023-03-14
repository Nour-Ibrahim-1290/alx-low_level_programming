#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Author: Nour M. Ibrahim
 * Desc: Header file containing the prototypes of all functions
 *		included in malloc_free dir
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int, int);

#endif
