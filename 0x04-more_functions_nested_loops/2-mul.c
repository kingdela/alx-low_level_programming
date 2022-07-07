#include "main.h"

/**
  * mul - Entry point
  * @a: an integer to be multiplied
  * @b: an integer to be multiplied
  * Return: 1 for uppercase and 0 for lowercase
  */
int mul(int a, int b)
{
	if ((a >= 0 || a <= 0) && (b >= 0 || b <= 0))
		return (a * b);
	else
		return (0);
}
