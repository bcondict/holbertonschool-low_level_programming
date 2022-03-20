#include "variadic_functions.h"
/**
 * sum_them_all - sum undifine numbers
 * @n: data number
 * Return: 0 if there's no numbers or result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0, value = 0;
	unsigned int i = 0;
	va_list numbers;


	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (; i < n; i++)
	{
		value = va_arg(numbers, int);
		result += value;
	}
	
	va_end(numbers);

	return (result);
}
