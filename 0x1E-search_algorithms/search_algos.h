#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);
int recursive_binary_search(int *array, int start, int end, int value);
void print_partial(int *array, int index, int end);

int advanced_binary(int *array, size_t size, int value);
int recursive_advanced(int *array, int start, int end, int value);

skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *create_skiplist(int *array, size_t size);
void init_express(skiplist_t *list, size_t size);
void free_skiplist(skiplist_t *list);
void print_skiplist(const skiplist_t *list);

#endif
