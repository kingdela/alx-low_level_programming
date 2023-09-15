#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return:void
 */
void more_numbers(void)
{
	char n, m;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			m = n;
			if (n > 9)
			{
				_putchar('1');
				m = n % 10;
			}
			_putchar ('0' + m);
		}
		_putchar('\n');
		i++;
	}
}
