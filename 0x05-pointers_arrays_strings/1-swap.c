#include "main.h"
/**
 * swap_int - change a and b values
 * @a: random number
 * @b: ramdom number 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
