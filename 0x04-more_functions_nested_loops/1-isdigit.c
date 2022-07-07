#include "main.h"

/**
  * _isdigit - Entry point
  * @c: The character to be checked
  * Return: 1 for uppercase and 0 for lowercase
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
