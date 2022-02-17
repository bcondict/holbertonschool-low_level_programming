#include "main.h"
/**
 * print_diagonal - print diagonal and spaces n times
 * @n: n times of diagonal and spaces
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a, b;

	a = 0;
	b = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (a < n)
	{
		b = 0;
		while (b <= a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}
