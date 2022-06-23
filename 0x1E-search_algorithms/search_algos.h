#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>

int advanced_binary(int *array, size_t size, int value);
int adv_bin_recursion(int *array, int start, int end, int value);
void partial_print(int *array, int index, int end);

#endif
