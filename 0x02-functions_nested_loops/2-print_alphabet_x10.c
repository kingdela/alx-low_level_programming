#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');

		i++;
	}
}
