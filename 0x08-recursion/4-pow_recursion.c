#include "main.h"
/**
 * _pow_recursion - take a power x of y
 * @x: number to be multiply
 * @y: number of times
 * Return: -1 if y is invalid, 1 if is 0, and recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
