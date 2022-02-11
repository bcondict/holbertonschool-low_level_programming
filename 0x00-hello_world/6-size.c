#include<stdio.h>
/**
 * main - Entry point
 *
 * sieze of evaluate the size of a variable
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int long_intType;
	long long int long_long_intType;
	float floatType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of long int: %zu bytes\n", sizeof(long_intType));
	printf("Size of long long int: %zu byte\n", sizeof(long_long_intType));
	printf("Size of float: %zu byte\n", sizeof(floatType));
	return (0);
}

