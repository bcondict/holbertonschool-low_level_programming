#include<stdio.h>
/**
 * main - Entry point
 *
 * sieze of evaluate the size of a variable
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(iType));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(cType));
	printf("Size of long int: %lu byte(s)s\n", (unsigned long)sizeof(l_intType));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(l_l_intType));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(fType));
	return (0);
}

