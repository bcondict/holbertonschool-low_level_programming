#include "main.h"
/**
 * print_line - print a straight line n times
 * @n: n times of straight
 * Return: Always 0
 */
void print_line(int n)
{
	int a;

	a = 0;

	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
