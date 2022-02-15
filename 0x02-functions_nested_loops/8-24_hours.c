#include "main.h"
/**
 * jack_bauer - every minute of the day
 * Return:
 */

void jack_bauer(void)
{
	int hours, minutes;

	hours = 0;
	minutes = 0;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar (hours / 10);
			_putchar (hours % 10);
			_putchar (':');
			_putchar (minutes / 10);
			_putchar (minutes % 10);
			_putchar ('\n');
		}
	}
}
