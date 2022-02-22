#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char c = s[0];
	int a, b = 0;

	while (s[b] != '\0')
		b++;

	for (a = 0; a < b; a++)
	{
		b--;
		c = s[a];
		s[a] = s[b];
		s[b] = c;
	}
}
