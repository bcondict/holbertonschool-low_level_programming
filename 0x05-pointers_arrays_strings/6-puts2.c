#include "main.h"
/**
 * puts2 - print other character of a string
 * @str: string name
 * Return: Always 0.
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
			_putchar (str[a]);
		else
			continue;
	}
	_putchar('\n');
}
