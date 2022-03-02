#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 * Return: 0 if is NULL or same _puts_recursion if is not
 */
void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	return (_puts_recursion(s + 1));
}
