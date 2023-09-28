#include "main.h"

int square(int, int);

/**
  * _sqrt_recursion - calculates the square root of a number using recursion
  * @n: the number to deal with.
  *
  * Return: square root of n.
  */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
  * square - find square root
  * @n: int to find square root
  * @val: square root
  * Return: int
  */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);
}
