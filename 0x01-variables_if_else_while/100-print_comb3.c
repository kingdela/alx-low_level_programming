#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int ch;
	int ch2;

	for (ch = '0'; ch < '9'; ch++)
	{
		for (ch2 = ch + 1; ch2 <= '9'; ch2++)
		{
			if (ch2 != ch)
			{
				putchar(ch);
				putchar(ch2);

				if (ch == '8' && ch2 == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
