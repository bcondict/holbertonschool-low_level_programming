#include <stdio.h>
/**
* main - sprint alphabet in lowercase
* Return: Always 0
*/
int main(void)
{
	for (int x = 'a'; x <= 'z' ; x++)
	{
		x = tolowe(x);
		putchar(x);
	}
	return (0);
}
