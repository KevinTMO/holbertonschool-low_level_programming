#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 *_strlen - will get the lenght of a string
 */

int _strlen(char *s);

/**
 *_memcpy - will copy the elements of one array to another
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 *malloc_checked - will allocated memory using malloc
 */

void *malloc_checked(unsigned int b);

/**
 *string_nconcat - will concatenate two strings in one new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 *_calloc - will set the memory to zero
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 *array_range - will print an array of integers in hex
 */

int *array_range(int min, int max);

/**
 *_realloc - will allocate new memory to a new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
