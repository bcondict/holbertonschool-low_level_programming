#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: point to array size
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j, k = 0, l = 0;

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			if (i == j)
				k = k + a[(size + 1) * i];
			if (i + j == size - 1)
				l = l + a[(size - 1) * (i + 1)];
			j++;
		}
		i++;
	}
	printf("%d, %d\n", k, l);
}
