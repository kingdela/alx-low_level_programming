#include "main.h"

/**
 * print_line - check for a digit
 * @m : number of _ to be printed
 * Return: void
 */
void print_line(int m)
{
	int i = 0;

	while (i < m && m > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
