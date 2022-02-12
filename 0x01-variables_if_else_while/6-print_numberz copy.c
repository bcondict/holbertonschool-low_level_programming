#include <stdio.h>
/**
* main - sprint alphabet in lowercase
* Return: Always 0
*/
int main(void)
{
	int x;

	for (x = 0; x < 10;)
		putchar((x / '10') + '0');

	putchar('\n');
	return (0);
}

