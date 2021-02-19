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

#endif
