#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 *It works the same as putchar from stdio.h
 */

int _putchar(char c);

/**
 *_strcat - will concatenate two strings using two pointers
 */

char *_strcat(char *dest, char *src);

/**
 *_strncat - will concatenate two strings until position met
 */

char *_strncat(char *dest, char *src, int n);

/**
 *_strncpy - will copy one string to another and append the rest with null byte
 */

char *_strncpy(char *dest, char *src, int n);

/**
 *_strcmp - will compare two strings and return the difference
 */

int _strcmp(char *s1, char *s2);

/**
 *reverse_array - will reverse the numbers of an array
 */

void reverse_array(int *a, int n);

/**
 *string_toupper - will change lowercase to uppercase using ascii values
 */

char *string_toupper(char *s);

/**
 *cap_string - will capitalize all first character of every word
 */

char *cap_string(char *s);

/**
 *leet - will change letter(upper and lower) for numbers
 */

char *leet(char *s);

/**
 *rot13 - will swap letter using Rot13 alphabet
 */

char *rot13(char *s);

#endif
