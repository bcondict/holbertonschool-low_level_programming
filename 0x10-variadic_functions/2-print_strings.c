#include "variadic_functions.h"
/**
 * print_string - print a string inside other string
 * @n: amount of number
 * Return: Always 0.
 */
void print_string(const char *separator. const unsigned int n, ...)
{
	unsigned int i;
	va_list s_complete;
	char *new_string;

	va_start(s_complete, n);

	for (; i < n; i++)
	{
		s_complete = va_arg(new_string, char *);

		if (new_string == NULL)
			printf("(nil)");
		else
			printf("%s", s_complete);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(s_complete);
}
