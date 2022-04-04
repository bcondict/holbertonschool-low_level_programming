#include "main.h"
/**
 *
 *
 *
 */
int clear_bit(unsigned long int *n, unsigned int index);
{
	int num1 = 0;

	if (n == NULL)
		return (-1);
	if (index > 31)
		return (-1);
	num1 = 1 << index;
	*n = *n & (~num1);
	return (1);
}
