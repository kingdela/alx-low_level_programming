#include "main.h"

/**
 * _strlen -  a function entry point
 * @s: An input string
 * Return: Nothing
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}
