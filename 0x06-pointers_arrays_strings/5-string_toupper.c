#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @n: pointer of array
 * Return: n pointer.
 */
char *string_toupper(char *n)
{
	int a;

	for (a = 0; n[a] != '\0'; a++)
		{
			if (n[a] >= 97 && n[a] <= 122)
				n[a] = n[a] - 32;
		}
	return (n);
}
