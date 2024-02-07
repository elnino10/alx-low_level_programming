#ifndef SEARCH_ALGOS_HEADER
#define SEARCH_ALGOS_HEADER

#include <stdio.h>
#include <stdlib.h>

/*function prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* helper functions*/
int binary_search_recurs(int *array, size_t lb, size_t ub, int value);
void print_array(int *array, size_t lb, size_t ub);

#endif /*SEARCH_ALGOS_HEADER*/
