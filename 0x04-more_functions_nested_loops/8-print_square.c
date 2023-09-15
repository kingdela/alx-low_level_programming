#include "main.h"

/**
 * print_square - print square
 * @size: integer variable
 */

void print_square(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int s;

		for (s = 1; s <= size; s++)
		{
			int m;

			for (m = 1; m <= size; m++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
