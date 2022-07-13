#include "main.h"



char *string_toupper(char *)
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
