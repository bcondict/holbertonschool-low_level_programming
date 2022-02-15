#include "main.h"
/**
 * print_times_table - print multiplication by n
 */

void print_times_table(int n);
{
	int a, b, c;

	if (n = 0; n <= 15; n++)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar ('0');
				for (b = 1; b <= n; b++)
				{
					_putchar (',');
					_putchar (' ');
					c = a * b;
					if (c <= n)
						_putchar (' ');
					else
						_putchar ('0' + (c / 10));
					_putchar ('0' + (c % 10));
				}
				_putchar ('\n');
		}
	}

}
