#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 *same as putchar function
 */

int _putchar(char c);

/**
 *memset - will fill a memory block
 */

char *_memset(char *s, char b, unsigned int n);

/**
 *_memcpy - will copy the elements of one array to another
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 *_strchr - will iterate until c value is met
 */

char *_strchr(char *s, char c);

/**
 *_strspn - iterate and match any character
 */

unsigned int _strspn(char *s, char *accept);

/**
 *_strpbrk - will iterate until the matched character
 */

char *_strpbrk(char *s, char *accept);

/**
 *_strstr- will locate the substring of a longer string
 */

char *_strstr(char *haystack, char *needle);

/**
 *print_chessboard - will print a chessboard using two dimensional array
 */

void print_chessboard(char (*a)[8]);

#endif
