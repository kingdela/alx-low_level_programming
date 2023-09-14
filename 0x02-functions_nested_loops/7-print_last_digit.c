#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: used for the argument
 * Return: integer value
 */

int print_last_digit(int n)

{
	int l;

	last = n % 10;

	if (l < 0)

	l = l * -1;

	_putchar(l + '0');

	return (l);
}
