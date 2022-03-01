#include "main.h"
/**
 * _strspn -  number of repetitions of s  in accept
 * @s: string to be compared
 * @accept: comparation with s
 * Return: the number of repetitions
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	for (b = 0; accept[b] != '\0'; b++)
	{
		for (a = 0; s[a] != ' '; a++)
		{
			if (accept[b] == s[a])
				c++;
		}
	}
	return (c);
}
