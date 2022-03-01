#include "main.h"
/**
 * _strstr - finds the first occurrence of needle in the haystack and return
 * @haystack: first string to be compared with
 * @needle: string to compare
 * Return: marches between the strings
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b;

	if (*haystack != '\0')
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			for (a = 0; haystack[a] != '\0'; a++)
			{
				if (needle[b] == haystack[a])
					return (haystack + a);
			}
		}
		return ('\0');
	}
}
