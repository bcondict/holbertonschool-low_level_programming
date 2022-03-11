#include "main.h"
/**
 * malloc_checked - pointer to allocated memory
 * @b: given value
 * Return: pointer value
 */
void *malloc_checked(unsigned int b)
{
	void *value;

	value = malloc(b);

	/*check if malloc exist*/
	if (value == NULL)
		exit(98);

	/*return pointer to allocated memory*/
	return (value);
}
