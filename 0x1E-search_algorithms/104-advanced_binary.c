#include "search_algos.h"
/**
 * advanced_binary - Find value in array using an
 * advanced version of binary search
 * @array: The array to be searched
 * @size: size_t size of array
 * @value: The value to be found
 * Return: The index of the array at which the value
 * was found, -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (adv_bin_recursion(array, 0, size - 1, value));
}

/**
 * adv_bin_recursion - Recursively searches
 * through array using binary search method.
 * @array: The array to be searched
 * @start: starting index of the search
 * @end: Endign index of the search
 * @value: The value to be found
 * Return: The index of the array at which the value was found, -1 if not.
 */
int adv_bin_recursion(int *array, int start, int end, int value)
{
	int mid = start + (end - start) / 2;

	if (start == end && array[start] == value)
		return (start);
	printf("Searching in array: ");
	partial_print(array, start, end);
	if (start == end)
		return (-1);
	else if (array[mid] == value || array[mid] > value)
		return (adv_bin_recursion(array, start, mid, value));

	return (adv_bin_recursion(array, mid + 1, end, value));
}

/**
 * partial_print - Prints the segment of the array being searched.
 * @array: The array
 * @start: The starting index
 * @end: The ending index
 */
void partial_print(int *array, int start, int end)
{
	for (; start <= end; ++start)
	{
		if (start < end)
		{
			printf("%d", array[start]);
			printf(", ");
		}
		else
			printf("%d\n", array[start]);
	}
}
