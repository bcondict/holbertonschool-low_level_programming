#include "function_pointer.h"
/**
 * print_name - function that print a pointer f to name
 * @name: name to be print
 * @f: pointer to be point
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
