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

	printf("Size of char: %lu bytes\n", sizeof(iType));
	printf("Size of int: %lu bytes\n", sizeof(cType));
	printf("Size of long int: %lu bytes\n", sizeof(l_intType));
	printf("Size of long long int: %lu byte\n", sizeof(l_l_intType));
	printf("Size of float: %lu byte\n", sizeof(fType));
	return (0);
}

