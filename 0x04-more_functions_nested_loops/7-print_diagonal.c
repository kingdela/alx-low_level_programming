#include "main.h"

/**
 * print_diagonal - checks for digit
 * @m: number of \\ to be printed
 * Return: void
 */
void print_diagonal(int m)
{
	int i = 0, s;

	while (i < m && m > 0)
	{
		s = 0;
		while (s < i)
		{
			_putchar(' ');
			s++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
