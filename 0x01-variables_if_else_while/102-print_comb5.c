#include <stdio.h>

/**
*
*
*
*/

int main(void)
{
	int f_num = 0, s_num = 0;

	for (f_num = 0; f_num < 100; f_num++)
	{
		for (s_num = 1; s_num < 100; s_num++)
		{
			if (((s_num % 10) + '0')  == ((f_num) % 10) + '0')
				continue;
			putchar((f_num / 10) + '0');
			putchar((f_num % 10) + '0');
			putchar(' ');
			putchar((s_num / 10) + '0');
			putchar((s_num % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
