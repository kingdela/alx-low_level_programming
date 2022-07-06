#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

float main(void)
{
	int num;
	int i;
	unsigned long a;
	unsigned long b;
	unsigned long c;

	a = 1;
	b = 2;

	num = 98;

	for (i = 1; i <= num; i++)
	{
		printf("%lu, ", a);
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
