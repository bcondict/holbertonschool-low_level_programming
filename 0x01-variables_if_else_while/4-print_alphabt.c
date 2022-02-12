#include <stdio.h>
/**
* main - sprint alphabet in lowercase
* Return: Always 0
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	if (x == 'e' && x == 'q')
		return (0);

	putchar('\n');
	return (0);
}
