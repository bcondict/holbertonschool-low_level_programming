#include "main.h"
/**
 * 
 * 
 * 
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	for (i = 0; src; i++)
		dest[i] = src[i];
	return(dest);
}