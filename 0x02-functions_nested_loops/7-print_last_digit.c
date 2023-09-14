#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: used for the argument
 * Return: integer value
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = -1 * (n % 10);
	else
		r = n % 10;

	_putchar ((r) + '0');

	return (r);
}
