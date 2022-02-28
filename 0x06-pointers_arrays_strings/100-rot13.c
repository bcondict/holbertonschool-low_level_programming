#include "main.h"
/**
 * rot13 - encrpt rot 13
 * @n: pointer of array
 * Return: pointer n
 */
char *rot13(char *n)
{
	int a, b;
	char a_to_z[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encript[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (*n != '\0')
	{
		for (a = 0; n[a] != '\0'; a++)
		{
			for (b = 0; a_to_z[b] != '\0'; b++)
				if (n[a] == a_to_z[b])
					n[a] = encript[b];
		}
	}
	return (n);
}
