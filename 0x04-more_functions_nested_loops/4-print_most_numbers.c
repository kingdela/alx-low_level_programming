#include "main.h"

/**
  * print_most_numbers - Entry point
  *
  * Return: Always 0 (Sucess)
  */
void print_most_numbers(void)
{
	char num;

	num = '0';

	while (num <= '9')
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}

		num++;
	}
	_putchar('\n');
}
