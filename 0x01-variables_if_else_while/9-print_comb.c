#include <stdio.h>

/**
 * main - output all single digit number of base 10
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i >= 0 && i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			continue;
	}

	putchar('\n');

	return (0);
}
