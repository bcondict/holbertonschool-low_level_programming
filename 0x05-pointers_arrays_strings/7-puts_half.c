#include "main.h"
/**
 * puts_half - print the half string
 * @str: string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int a, b, c;

	c = 0;

	for (a = 0; str[a] != '\0'; a++)
		c++;

	b = (c / 2);

	if ((c % 2) == 1)
		b = ((c + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
