#include "main.h"

/**
 * print_times_table - prints multiplication table
 * @n : use in times table
 * Return:void
 */

void print_times_table(int n)
{
	int a = 0, i, b;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			i = a * b;
			if (b == 0)
				_putchar('0' + i);
			else if (i < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + i);
			}
			else if (i < 100)
			{
				_putchar (' ');
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			else
			{
				_putchar('0' + i / 100);
				_putchar('0' + (i - 100) / 10);
				_putchar('0' + i % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
