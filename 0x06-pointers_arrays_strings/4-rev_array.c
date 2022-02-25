#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: array 1
 * @n: counter of array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0, save;

	n--;
	while (i <= n)
	{
		save = a[i];
		a[i++] = a[n];
		a[n--] = save;
	}
}
