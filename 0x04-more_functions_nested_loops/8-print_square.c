#include "main.h"

/**
 * print_square - check for a digit
 * @m : number of _ to be printed
 * Return: void
 */
void print_square(int m)
{
	int i = 0, s;

	while (i < m && m > 0)
	{
		s = 0;
		while (s < m)
		{
			_putcmhar('#');
			s++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
