#include "main.h"
/**
 * @brief 
 * 
 * 
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
