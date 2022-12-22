#include "main.h"

/**
* string_toupper - the capitalization of all lowercase letters in a string.
*
* @s: string check
*
* Return: The upercased string
*/

char *string_toupper(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 97 && s[x] <= 122)
		{
			s[x] = s[x] - 32;
		}
		x++;
	}
	return (s);
}
