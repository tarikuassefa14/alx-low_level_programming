#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *yyy;
	int x, r = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	yyy = malloc(sizeof(char) * (x + 1));

	if (yyy == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		yyy[r] = str[r];

	return (xxx);
}
