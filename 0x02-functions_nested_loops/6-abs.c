#include "main.h"

/**
  * _abs - Entry point
  *
  * @r: An input character
  *
  * Return: Always 0 (Success)
  */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
