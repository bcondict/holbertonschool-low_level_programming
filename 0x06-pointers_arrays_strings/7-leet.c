#include "main.h"
/**
 * leet - encrypt a text with 1337 code
 * @n: pointer of array
 * Return: pointer n
 */
char *leet(char *n)
{
	char let[11] = {'a', 'A', 'e', 'E', 't', 'T', 'l', 'L', 'o', 'O'};
	char num[11] = {'4', '4', '3', '3', '7', '7', '1', '1', '0', '0'};
	int a, b;

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; let[b] != '\0'; b++)
		{
			if (n[a] == let[b])
				n[a] = num[b];
		}
	}
	return (n);
}
