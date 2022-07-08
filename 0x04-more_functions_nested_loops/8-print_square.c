#include "main.h"

/**
  * print_square - Prints a squareusing the character #.
  * @size: The size of the square.
  */
void print_square(int size)
{
	int j, wid;

	if (size > 0)
	{
		for (wid = 0; wid < size; wid++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
