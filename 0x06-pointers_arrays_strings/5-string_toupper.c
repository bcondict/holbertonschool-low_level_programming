#include "main.h"
/**
 * 
 * 
 * 
 */
char *string_toupper(char *n)
{
	char a;

	for (a = 0; n[a] != '\0'; a++)
		{
			if (n[a] >= 97 && n[a] <= 122)
				n[a] = n[a] - 32;
			else
				continue;
		}
	return(n);	
}
