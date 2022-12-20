#include "main.h"

/**
 * rev_string - Develop a function that turns a string backward
 *
 * @s: string
 *
 * Return: Null
 */

void rev_string(char *s)
{
	int c, i, mx;

	for (c = 0; s[c] != '\0'; c++)
		;
	c--;
	i = 0;
	while (i < c)
	{
		mx = s[i];
		s[i] = s[c];
		s[c] = mx;
		i++;
		c--;
	}
}
