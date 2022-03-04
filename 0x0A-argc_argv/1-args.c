#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: count of argv
 * @argv: count of argc
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
