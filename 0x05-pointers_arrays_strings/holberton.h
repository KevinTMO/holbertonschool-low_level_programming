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

/**
 *rev_string - will print a string in reverse order
 */

void rev_string(char *s);

/**
 *puts2 - will print the next character of a string
 */

void puts2(char *str);

/**
 *puts_half will print the other half of a string
 */

void puts_half(char *str);

/**
 *print_array - will print all the values of the array
 */

void print_array(int *a, int n);

#endif
