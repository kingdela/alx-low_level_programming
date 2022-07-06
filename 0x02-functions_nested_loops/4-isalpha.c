#include "main.h"

/**
  * _isalpha - Entry point
  *
  * @c: An input character
  *
  * Return: Always 0 (Success)
  */
int _isalpha(int c)
{
	int isletter = 0;
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
