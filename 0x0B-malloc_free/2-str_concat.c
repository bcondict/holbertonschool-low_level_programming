#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate string s1 and s2
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: null if is null, or the string with 2 concatenation
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int str1 = 0, str2 = 0;
	int a, b;

	/* if string is null pass like an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* counter of strings size */
	while (s1[str1])
		str1++;
	while (s2[str2])
		str2++;

	/* apart a memory space of the size of both strings with a newly space */
	concat = malloc((str1 + str2) + 1);

	/* if both string are null return a null */
	if (concat == NULL)
		return (NULL);

	/* first part of string with string 1 (s1) */
	for (a = 0; a < str1; a++)
		concat[a] = s1[a];

	/* second part of string with string 2 (s2)*/
	for (b = 0; b < str2; b++)
		concat[a + b] = str2[b];

	return (concat);
}
