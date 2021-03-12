#ifndef VAR_H
#define VAR_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 *struct opfunc - structure data for task 3
 *@opsym: is the member pointing to operator symbols
 *@f: is the member pointing to the functions
 */

typedef struct opfunc
{
	char *opsym;
	void (*f)(va_list);
} fname_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VAR_H */
