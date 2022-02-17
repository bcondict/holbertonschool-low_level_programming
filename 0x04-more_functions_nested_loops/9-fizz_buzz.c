#include <stdio.h>
/**
 * main - print numbers 1 to 100 with 3 and 5 condition
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c;

	for (a = 1; a < 100; a++)
	{
		b = a % 3;
		c = a % 5;

		if (b == 0)
		{
			printf("Fizz");

			b = a % 5;

			if (b == 0)
				printf("Buzz");
			printf(" ");
		}
		else if (c == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (a == 100)
			printf("%d", a);
			     
		else
		{
			printf("%d", a);
			printf(" ");
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
