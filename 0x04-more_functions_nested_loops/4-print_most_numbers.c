#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * Return: No Value
 */
void print_most_numbers(void)
{
	char m = 0;

	while (m <= 9)
	{
		if (m != 2 && m != 4)
		{
			_putchar('0' + m);
		}
		m++;
	}
	_putchar('\n');
}
