#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all letters of the alphabeth in lower case
 *
 * Return: 0 when successful
 */
int main(void)
{
	char i, a;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
