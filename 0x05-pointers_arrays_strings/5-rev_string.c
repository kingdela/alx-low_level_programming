#include "main.h"

/**
  * rev_string - Reverses a string.
  * @s: The string to be reversed.
  */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char ans;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		ans = s[i];
		s[i++] = s[len];
		s[len] = ans;
	}
}
