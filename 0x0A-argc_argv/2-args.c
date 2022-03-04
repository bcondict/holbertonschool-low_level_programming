#include <stdio.h>

/**
 * main - print all arguments
 * @argc: count of argv
 * @argv: count of argc
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
