#include "main.h"

/**
  * main - Entry point
  *
  * Return: On success 1.
  */
int main(void)
{
	char n[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');

	return (0);
}

