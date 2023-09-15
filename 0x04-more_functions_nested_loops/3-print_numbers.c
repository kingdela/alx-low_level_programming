#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: No value
 */
void print_numbers(void)
{
	char m = 0;

	while (m <= 9)
	{
		_putchar('0' + m);
		m++;
	}
	_putchar('\n');
}
