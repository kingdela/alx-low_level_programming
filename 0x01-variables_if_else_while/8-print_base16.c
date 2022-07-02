#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int ch2;
	char ch;

	for (ch2 = '0'; ch2 <= '9'; ch2++)
		putchar(ch2);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
