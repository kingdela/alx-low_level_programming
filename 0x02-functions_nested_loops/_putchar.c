#include <unistd.h>
#include "main.h"

/**
  * main - Entry pointt
  *
  * Return: Always 0 (success)
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char n[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 1; i <= 9; i++)
	{
		_putchar(n[]);
	}

	_putchar('\n');

}
