#include "variadic_functions.h"
/**
 * print_strings - print a string inside other string
 * @separator: string between numbers
 * @n: amount of number
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *new_string;
	va_list s_complete;

	va_start(s_complete, n);

	for (; i < n; i++)
	{
		new_string = va_arg(s_complete, char *);

		if (s_complete == NULL)
			printf("(nil)");
		else
			printf("%s", new_string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(s_complete);
}