#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int int_type;

	char char_type;

	long int long_int_type;

	long long long_long_type;

	float float_type;

	printf("Size of a char: %zu byte(s)\n", sizeof(char_type));

	printf("Size of an int: %zu byte(s)\n", sizeof(int_type));

	printf("Size of a long int: %zu byte(s)\n", sizeof(long_int_type));

	printf("Size of a long long: %zu byte(s)\n", sizeof(long_long_type));

	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));

	return (0);
}
