#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate str string and goes toa newly
 * @str: source string
 * Return: null if null, copy string + 1 if not
 */
char *_strdup(char *str)
{
	char *copy;
	int a, counter = 0;

	/* if string is null return null */
	if (str == NULL)
		return (NULL);

	/* run the source string */
	for (a = 0; str[a]; a++)
		counter++;

	/* gives enought space for copy string + newly space */
	copy = malloc(sizeof(char) * (counter + 1));

	if (copy == NULL)
		return (NULL);

	/* run the source string and give the same value to copy string*/
	for (a = 0; str[a]; a++)
		copy[a] = str[a];

	copy[a] = '\0';

	return (copy);
}
