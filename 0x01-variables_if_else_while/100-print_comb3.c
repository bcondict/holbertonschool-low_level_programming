#include <stdio.h>
/**
* main - sprint alphabet in lowercase
* Return: Always 0
*/
int main(void)
{
	char x, y;

	for (x = 0; x < 9 ; x++)
	{
		for( y = x + 1; y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((x % 10) + '0');
			if ( x == 8 && y == 9 )
				continue;
			putchar(',');
			putchar(' ');
		}
	}


	putchar('\n');
	return (0);
}

