#include "main.h"
/**
 * print_square - print a square with #
 * @size: the number of # to print
 * Return: Always 0.
 */
void print_square(int size)
{
	if (size > 0)
	{
		int v, h;

		for (v = 1; v < h; v++)
		{
			for (h = 1; h <= size; h++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
