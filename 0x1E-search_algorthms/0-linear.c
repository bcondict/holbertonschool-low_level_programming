#include "search_algos.h"

/**
 * linear_search - search for the value in an array of integer
 *				using the linear search alghrithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in "array".
 * @value: value to search for.
 *
 * Return: index where 'value' is located,
 *			-1 if 'value' is not present int 'array',
 *			-1 if array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
