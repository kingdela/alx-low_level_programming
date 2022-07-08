#include "main.h"

/**
  * more_numbers - Entry point
  *
  * Return: Always 0 (Sucess)
  */
void more_numbers(void)
{
	int count1;
	char count2;

	for (count1 = 0; count1 <= 9; count1++)
	{
		for (count2 = 0; count2 <= 14; count2++)
		{
			if (count2 > 9)
			{
				_putchar((count2 / 10) + '0');
			}
			_putchar((count2 % 10) + '0');
		}
		_putchar('\n');
	}
}
