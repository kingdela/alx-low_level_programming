#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - prints numbers
 * @m: number to be printed
 * Return: void
 */
void print_number(int m)
{
	unsigned int n1 = 0;

	if (m < 0)
	{
		n1 = -m;
		_putchar('-');
	}
	else
	{
		n1 = m;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
