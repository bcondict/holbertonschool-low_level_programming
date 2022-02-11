#include<stdio.h>
/**
 * main - Entry point
 *
 * sieze of evaluate the size of a variable
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cType;
	int iType;
	long int l_intType;
	long long int l_l_intType;
	float fType;

	printf("Size of char: %zu bytes\n", (unsigned long)sizeof(iType));
	printf("Size of int: %zu bytes\n", (unsigned long)sizeof(cType));
	printf("Size of long int: %zu bytes\n", (unsigned long)sizeof(l_intType));
	printf("Size of long long int: %zu byte\n", (unsigned long)sizeof(l_l_intType));
	printf("Size of float: %zu byte\n", (unsigned long)sizeof(fType));
	return (0);
}

