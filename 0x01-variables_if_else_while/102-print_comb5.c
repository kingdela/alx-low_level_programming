#include <stdio.h>

/**
 * main - output all single digit number of base 10
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 99; i++)
	{
		int ii;

		for (ii = i + 1; ii < 100; ii++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((ii / 10) + '0');
			putchar((ii % 10) + '0');

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}

	putchar('\n');

	return (0);
}
