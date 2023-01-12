#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatinate two string
 *
 * @s1: First string
 * @s2: Second string
 * @n: maximum nub to be concatinated to s2 to s2
 *
 * Return: to the Pointer
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int siz1 = 0, siz2 = 0, i = 0;

	if (s1 != NULL)
		for (; s1[siz1]; siz1++)
		;
	if (s2 != NULL)
		for (; s2[siz2]; siz2++)
		;
	if (n >= siz2)
		con = malloc(sizeof(char) * (siz1 + siz2 + 1));
	else
	{
		con = malloc(sizeof(char) * (siz1 + n + 1));
		siz2 = n;
	}
	if (con == NULL)
		return (NULL);

	while (i < siz1)
	{
		con[i] = s1[i];
		i++;
	}

	while (i < s1_len + s2_len)
	{
		con[i] = s2[i - s1_len];
		i++;
	}
	con[i] = '\0';
	return (con);
}
