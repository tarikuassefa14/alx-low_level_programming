#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: The string
 *
 * Return: converted string
 */
char *rot13(char *s)
{
	int x, y;

	char caa[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lab[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; caa[y] != '\0'; y++)
		{
			if (s[x] == caa[y])
			{
				s[x] = lab[y];
				break;
			}
		}
	}

	return (s);
}
