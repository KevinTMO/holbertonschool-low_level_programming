#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 *_putchar - it works as the original putchar
 */

int _putchar(char c);

/**
 *puts_recursion will iterate calling the same function until the if comes true
 */

void _puts_recursion(char *s);

/**
 *_print_rev_recursion - will print a string in reverse
 */

void _print_rev_recursion(char *s);

/**
 *_strlen_recursion - will get the lenght of a string
 */

int _strlen_recursion(char *s);

/**
 *factorial - will get the factorial of every number in the main
 */

int factorial(int n);

/**
 *_pow_recursion - raise x to the power of y and return the value
 */

int _pow_recursion(int x, int y);

#endif
