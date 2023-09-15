#include <stdio.h>

/**
 * main - prints prime numbers
 * Return: Always 0
 */
int main(void)
{
	long int xy = 612852475143;
	long int py;

	for (py = 2; py < xy; py++)
	{
		if (xy % py == 0)
		{
			xy = xy / py;
		}
	}
	printf("%ld\n", py);

	return (0);
}
