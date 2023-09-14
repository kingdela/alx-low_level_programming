#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 * Description: find
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int c = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	bef1 = (bef / c);
	bef2 = (bef % c);
	aft1 = (aft / c);
	aft2 = (aft % c);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / c));
		printf("%lu", aft2 % c);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
