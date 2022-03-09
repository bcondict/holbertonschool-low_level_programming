#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it with c char.
 * @size: size of array
 * @c: character to intialize the array
 * Return: null if size is 0, or pointer to array if is diferent to.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
