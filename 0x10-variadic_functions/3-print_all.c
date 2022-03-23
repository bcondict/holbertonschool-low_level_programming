#include "variadic_functions.h"

/**
 * print_char - print a character
 * @arg: character to print
 *
 * Return: void
 */
void (print_char)(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - function to print a integer
 * @arg: integer to print
 */
void (print_int)(va_lint arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - function to print a float
 * @arg: float to print
 */
void (print_float)(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - function to print a string
 * @arg: string to print
 */
void (print_strings)(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - print everything
 * @format: number of arguments we got
 */
void print_all(const char * const format, ...)
{
	list_arg_a s_arg[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{"\0", NULL}
	};
	va_list list;
	int i = 0, j = 0;
	char separator = "";

	va_start(list, format);

	for (; format && format[i]; i++)
	{
		for (j = 0; s_arg[j].name; j++)
		{
			if (*(s_arg[j].name) == format[i])
			{
				printf("%s", separator);
				s_arg[j].print(list);
				separator = ", ";
				break;
			}
		}

	}

	va_end(list);
	printf("\n");
}
