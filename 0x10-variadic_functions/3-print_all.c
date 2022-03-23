#include "variadic_functions.h"

/**
 * print_char - print a character
 * @arg: character to print
 * Return: void
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - function to print a integer
 * @arg: integer to print
 * Return: void
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - print a float
 * @arg: float to print
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - prints a string
 * @arg: string to print
 */
void print_string(va_list arg)
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
	char *separator = "";

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		
		while (s_arg[j].name)
		{
			if (*(s_arg[j].name) == format[i])
			{
				printf("%s", separator);
				s_arg[j].print(list);
				separator = ", ";
				break;
			}
			j++
		}
		i++
	}

	va_end(list);
	printf("\n");
}
