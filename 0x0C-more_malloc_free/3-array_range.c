#include "main.h"
/**
 * array_range - arrays of integers
 * @min: number to star count
 * @max: number to finish count
 * Return: return string with value with min to max
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (0);

	s = (int *)malloc(sizeof(int) * (max - min) + 1);

	for (i = min; i <= max; i++)
		s[i] = i;

	return (s);
}
