#include "main.h"

/**
* _strcat - a function that joins two strings together.
*
* @dest: The String destination
*
* @src: Concatenated string
*
* Return: String result
*/

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
