#include "main.h"
/**
 * print_triangle - print a triangle with #
 * @size: number of #
 * Return: Always 0
*/
void print_triangle(int size)
{
	int spaces, numerals;

	if (size <= 0)
	_putchar('\n');

	for (spaces = 1; spaces <= size; spaces++)
	{
		for (numerals = 1; numerals <= size; numerals++)
		{
			if (numerals <= (size - spaces))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

}
