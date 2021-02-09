#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <unistd.h>

/**
 *int _putchar will print a single character the same as function putchar
 *@c is the variable to do it
 */

int _putchar(char c);

/**
 *void print_alphabet(void) will prints the alphabet using another main
 */

void print_alphabet(void);

/**
 *void print_alphabet_x10 will print the alphabet 10 times
 */

void print_alphabet_x10(void);

/**
 *int _islower will check if the characters are lowercase
 */

int _islower(int c);

/**
 *int _isalpha will check if the character is uppercase
 */

int _isalpha(int c);

/**
 *int print_sign will check if the number is greater or less and print a sign before it
 */

int print_sign(int n);

/**
 *_abs will get the absolute value of a number
 */

int _abs(int n);

/**
 *print_last_digit - will print the last digit of a number
 */

int print_last_digit(int);

/**
 *jack_bauer will print the 24 hours
 */

void jack_bauer(void);

/**
 *times_table will print a time table
 */

void times_table(void);

/**
 *will add two integers and return the result
 */

int add(int, int);

#endif
