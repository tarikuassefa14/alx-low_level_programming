#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 *
 * @s: String to search
 *
 * @accept: String
 *
 * Return: Number of bytes in prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y, z = 0;

	while (accept[x])
	{
		y = 0;

		while (s[y] != 32)
		{
			if (accept[x] == s[y])
			{
				z++;
			}

			y++;
		}

		x++;
	}

	return (z);
}
