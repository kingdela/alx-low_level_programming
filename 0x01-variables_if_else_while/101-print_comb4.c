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
	int ch3;

	for (ch = '0'; ch < '9'; ch++)
	{
		for (ch2 = ch + 1; ch2 <= '9'; ch2++)
		{
			for (ch3 = ch2 + 1; ch3 <= '9'; ch3++)
			{
				if ((ch2 != ch) != ch3)
				{
					putchar(ch);
					putchar(ch2);
					putchar(ch3);

					if (ch == '7' && ch2 == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
