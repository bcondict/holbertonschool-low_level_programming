#include "main.h"
/**
 * jack_bauer - every minute of the day
 * Return:
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; horas <= 23; hours++)
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
