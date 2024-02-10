#ifndef SEARCH_ALGOS_HEADER
#define SEARCH_ALGOS_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/*function prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

/* helper functions*/
int binary_search_recurs(int *array, size_t lb, size_t ub, int value);
void print_array(int *array, int lb, int ub);
int adv_binary_search_recurs(int *array, size_t lb, size_t ub, int value);
listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

#endif /*SEARCH_ALGOS_HEADER*/
