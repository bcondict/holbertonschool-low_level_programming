#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: count of argv string
 * @argv: string
 * Return: 1 if is error, argv hor
 */
int main(int argc, char *argv[])
{
	int hor, ver, sum = 0;

	for (hor = 1; hor < argc; hor++)
	{
		for (ver = 0; argv[hor][ver]; ver++)
		{
			if (argv[hor][ver] < '0' || argv[hor][ver] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[hor]);
	}

	printf("%d\n", sum);
	return (0);
}
