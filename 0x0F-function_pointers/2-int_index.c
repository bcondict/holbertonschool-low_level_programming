#include "function_pointers.h"
/**
 * int_index - search an integer inside array pointer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to funcion to compare values
 * Return: -1 of no elements match or if size is 0 or less
 *			return the index of first element for cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
