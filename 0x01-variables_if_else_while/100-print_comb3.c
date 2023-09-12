#include <stdio.h>

/**
 * main - output all single digit number of base 10
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int ii;

		for (ii = i + 1; ii < 10; ii++)
		{
			putchar((i % 10) + '0');
			putchar((ii % 10) + '0');

			if (i != 8)
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
