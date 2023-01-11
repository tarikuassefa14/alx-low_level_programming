#include "main.h"

/**
* _strcmp - A function for comparing two strings.
*
* @s1: The first String
*
* @s2: The second string
*
* Return: String result
*/

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
