#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int a, b, c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		c++;
	}

	for (b = (c - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
	}
