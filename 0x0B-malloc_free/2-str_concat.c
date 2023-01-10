# include "main.h"
# include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string parameter
 * @s2: first sting parameter 
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int x = 0, y = 0, z = 0;

	if (s1 != NULL)
		for (; s1[i]; x++)
		;
	if (s2 != NULL)
		for (; s2[j]; y++)
		;

	p = malloc(sizeof(char) * (x + y + 1));
	if (p == NULL)
		return (NULL);

	while (z < i)
	{
		p[z] = s1[z];
		z++;
	}

	while (z < x + y)
	{
		p[z] = s2[z - i];
		k++;
	}
	p[z] = '\0';
	return (p);
}
