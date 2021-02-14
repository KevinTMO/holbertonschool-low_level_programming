#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/**
 *_putchar will print a single character
 */

int _putchar(char c);

/**
 *reset_to_98 will redefine the value of the variable n with a pointer
 */

void reset_to_98(int *n);

/**
 *int_swap - will swap the value of two pointers using a temp var
 */

void swap_int(int *a, int *b);

/**
 *_strlen - will get the length of a pointer
 */

int _strlen(char *s);

/**
 *_puts - will print the string of a pointer
 */

void _puts(char *str);

/**
 *print_rev - will print a string in reverse
 */

void print_rev(char *s);

#endif
