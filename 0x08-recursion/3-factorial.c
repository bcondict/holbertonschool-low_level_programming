#include "main.h"
/**
 * factorial - gives the factorial of a given number
 * @n: number to takes the factorial
 * Return: -1 if is less than 0, 1 to 0 and 1, and factorial of number
 */
int factorial(int n)
{
	if (!n)
		return (0);
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
