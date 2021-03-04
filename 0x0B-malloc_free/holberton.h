#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 *_PUTCHAR will do as the regular putchar do
 */

int _putchar(char c);

/**
 *create_array - will create an array of chars with a specific char
 */

char *create_array(unsigned int size, char c);

/**
 *_strdup - will copy the string of on array to another using mallocs
 */

char *_strdup(char *str);

/**
 *str_concat - will concatenate two strings after taking size with malloc
 */

char *str_concat(char *s1, char *s2);

/**
 *alloc_grid - create a 2 dimensional array step by step
 */

int **alloc_grid(int width, int height);

/**
 *free_grid - will free the bytes of an array
 */

void free_grid(int **grid, int height);

#endif
