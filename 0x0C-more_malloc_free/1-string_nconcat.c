#include "main.h"
/**
 * string_nconcat - function to concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of new string
 * Return: new string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, k = 0;
	char *conc_st;

	if (s1)
	{
		while (s1[j])
			j++;
	}
	if (s2)
	{
		while (s2[k])
			k++;
	}

	if (k > n)
		k = n;

	conc_st = malloc(sizeof(char) * (j + k + 1));

	for (i = 0; i < j; i++)
		conc_st[i] = s1[i];
	for (i = 0; i < k; i++)
		conc_st[i + j] = s2[i];

	conc_st[j + k] = '\0';

	return (conc_st);
}
