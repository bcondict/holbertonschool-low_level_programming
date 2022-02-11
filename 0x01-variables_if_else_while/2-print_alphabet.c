#include <stdio.h>
/**
* main - sprint alphabet in lowercase
* Return: Always 0
*/
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolowe(x));
	}
	return (0);
}
