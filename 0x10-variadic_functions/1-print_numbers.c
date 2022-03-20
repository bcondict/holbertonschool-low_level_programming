#include "variadic_functions.h"
/**
 * print_numbers - print numbers with a string between
 * @separator: string between numbers
 * @n: amount of number
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list s_result;

	va_start(s_result, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(s_result, n))

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(s_result);
}
