#include "search_algos.h"

/**
 * to_print - print the lenght of the array to search
 * @array: is a pointer to the first element of the searching array.
 * @left: start of searching array.
 * @right: end of searching array.
 *
 * Return: always void.
 */

void to_print(int *array, size_t left, size_t right)
{
	size_t i = 0;

	printf("Searching array: ");
	for (i = left; i <= right; i++)
	{
		if (i == left)
			{
			printf("%d", array[i]);
			continue;
			}

		if (i > 0)
			printf(", %d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - search for a value in a sorted array of integers
 *				using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in "array".
 * @value: value to search for.
 *
 * Return: index where 'value' is located,
 *			-1 if 'value' is not present int 'array',
 *			-1 if array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0, middle = 0;

	right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		to_print(array, left, right);

		middle = (left + right) / 2;
		if (array[middle] < value)
		{
			left = middle + 1;
			continue;
		}
		if (array[middle] > value)
		{
			right = middle - 1;
			continue;
		}
		else if (array[middle] == value)
			return (middle);
	}
	return (-1);
}
