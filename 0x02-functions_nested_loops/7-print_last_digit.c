#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: used for the argument
 * Return: integer value
 */

int print_last_digit(int var)
{
	int r;

	if (var < 0)
		r = -1 * (var % 10);
	else
		r = var % 10;

	_putchar ((r) + '0');

	return (r);
}
