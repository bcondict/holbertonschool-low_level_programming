#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @b: number to evalate
 * Return: last digit and absolute value
 */

int print_last_digit(int b)
{
	int LD = b % 10;

	if (LD < 0)
		-LD
	_putchar (LD);
	return (LD);
}
