#include "main.h"

/**
* leet - method that converts a string to 1337
*
* @s: The string
*
* Return: Converted string
*/

char *leet(char *s)
{
	int x, y;

	char l1[] = {'a', 'A', 'E', 'e', 'o', 'O', 't', 'T', 'L', 'l'};

	char l2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (s[x] == l1[y])
				s[x] = l2[y];
		}
	}
	return (s);
}
