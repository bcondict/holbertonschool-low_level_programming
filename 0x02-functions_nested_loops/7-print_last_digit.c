#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @b: number to evalate
 * Return: last digit and absolute value
 */

int print_last_digit(int b)
{
	int LD;

	LD = b % 10;

	if (LD < 0)
		LD = LD * -1;
	_putchar ('0' + LD);
	return (LD);
}
