#include "main.h"
/**
 * more_numbers - print 10 times numbers from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int a;
	int b = 0;

	while (b <= 9)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
				_putchar ('0' + (a / 10));
			_putchar ('0' + (a % 10));
		}
		_putchar ('\n');
		b++;
	}
}
