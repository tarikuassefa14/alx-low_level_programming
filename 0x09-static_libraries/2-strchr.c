#include "main.h"

/**
* *_strchr -  function that locates a character in a string.
*
* @s: String source
*
* @c: Character source
*
* Return: Null
*/

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\n'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
