#include "main.h"

/**
  * string_toupper - changes all lowercase letters of string
  * to uppercase
  * @a: string to modify
  *
  * Return: the resulting string
  */

char *string_toupper(char *a)
{
	int i = 0;

	while (*(a + i))
	{
		if (*(a + i) >= 'a' && *a <= 'z')
			*(a + i) -= 32;

		i++;
	}
	return (a);
}
