#include <stdio.h>

/**
 * main - output all single digit number of base 10
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int ii;

		for (ii = i + 1; ii < 9; ii++)
		{
			int jj;

			for (jj = ii + 1; jj < 10; jj++)
			{
				putchar((i % 10) + '0');
				putchar((ii % 10) + '0');
				putchar((jj % 10) + '0');

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				else
					continue;
			}
		}
	}

	putchar('\n');

	return (0);
}
