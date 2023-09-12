#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all letters of the alphabeth in lower case
 *
 * Return: 0 when successful
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
