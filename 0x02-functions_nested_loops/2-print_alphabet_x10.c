#include "main.h"

/**
  * print_alphabet_x10 - Print alphabets x10
  *
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	int x;

	for (x = 1; x <= 10; x++)
	{
		char n;

		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
