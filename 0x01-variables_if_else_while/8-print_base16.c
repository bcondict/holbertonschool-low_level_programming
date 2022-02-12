#include <stdio.h>
/**
* main - sprint alphabet in lowercase
* Return: Always 0
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= '9'; x++)
		putchar(x);
    for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
