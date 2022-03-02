#include "main.h"
/**
 * _strlen_recursion - count a string
 * @s: string to  be count
 * Return: the number of lenght of string
 */
int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
