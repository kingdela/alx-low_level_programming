#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char ch;
	char ch2;
	char ch3;

	ch2 = 'q';
	ch3 = 'e';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != ch2 && ch != ch3)
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
