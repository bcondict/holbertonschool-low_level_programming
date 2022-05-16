#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Pointer to string
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int i = 0, len = 0;

	for (i = 0; s[i]; i++)
		len = len + 1;
	return (len);
}