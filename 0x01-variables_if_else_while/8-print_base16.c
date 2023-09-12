#include <stdio.h>

/**
 * main - output all single digit number of base 10
 *
 * Return: 0 if successful
 */
int main(void)
{
	int a;
	char i;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
