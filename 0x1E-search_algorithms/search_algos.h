#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

/* LIBRARIES TO INCLUDE AND USE */

#include <stdio.h>
#include <math.h>

/* PROTOTYPES FUNCTIONS BELOW */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

/* HELPER FUNCTIONS */

void printArr(int *array, int low, int high, size_t mid);

#endif /* _SEARCH_ALGOS_H */
