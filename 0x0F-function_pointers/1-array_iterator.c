#include "function_pointers.h"
/**
 * array_iterator - make an action to a each element of an array
 * @array: array to made action
 * @size: size of array
 * @action: action to excecute
 * Return: always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
