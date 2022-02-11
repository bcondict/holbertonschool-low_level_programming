#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cType;
	int iType;
	long int l_intType;
	long long int l_l_intType;
	float fType;

	printf("Size of a char: %lu byte(s)\n", sizeof(cType));
	printf("Size of an int: %lu byte(s)\n", sizeof(iType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l_intType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(l_l_intType));
	printf("Size of a float: %lu byte(s)\n", sizeof(fType));
	return (0);
}

