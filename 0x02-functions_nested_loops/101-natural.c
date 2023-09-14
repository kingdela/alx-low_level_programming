#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes & prints sum of multiples of 3
 * Description: computes and prints
 * Return: 0 for success
 */

int main(void)
{
	int c = 0;
	int i = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			i += c;
		}
		c++;
	}
	printf("%i\n", i);
	return (0);
}
