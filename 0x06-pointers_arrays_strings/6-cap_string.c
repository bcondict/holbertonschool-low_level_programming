#include "main.h"
/**
 * @brief 
 * 
 */
char *cap_string(char *n)
{
	int a;
	for (a = 0; n[a] != '\0'; a++)
	{
		if (n[a] = " " || n[a] = "	" || n[a] = "\n" || n[a] = "," || n[a] = "." || n[a] = ";" || n[a] = "!" || n[a] = "?" || n[a] = "\"" || n[a] = "(" || n[a] = ")" || n[a] = "{" || n[a] = "}" )
		{
			n[a++] = n[a++] + 32;
		}
	}
}
