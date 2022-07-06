#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - check main
  * @n: Input integer
  * Return: Always 0 (Success)
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar("%d", n);

			if (n == 98)
				continue;
			_putchar(", ");
		}
		_putchar("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar("%d", n);

			if (n == 98)
				continue;
			_putchar(", ");
		}
		_putchar("\n");
	}
}
