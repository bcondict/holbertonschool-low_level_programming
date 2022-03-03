#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to take square root
 * Return: return the value of square root
 */
int _sqrt_recursion(int n)
{
	return (Pow_sqrt(0, n));
}

/**
 * Pow_sqrt - prove if a powered square is n
 * @a: root square of n
 * @n: number to take square root
 * Return: -1 if square root is not exacly or 1 if it's
 */
int Pow_sqrt(int a, int n)
{
	if (n < a * a)
		return (-1);
	if (n == a * a)
		return (a);
	return (Pow_sqrt(a + 1, n));
}
