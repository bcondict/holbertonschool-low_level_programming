#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char letter;
	int letterx10;

	letterx10 = 0;

	while (letterx10 < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar (letter);
		letterx10++;
		_putchar('\n');
	}
}
