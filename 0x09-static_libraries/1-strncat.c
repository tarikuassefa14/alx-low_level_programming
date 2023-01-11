#include "main.h"

/**
* _strncat - a function that joins two strings together.
*
* @dest: The String destination
*
* @src: Concatenated string
*
* @n: Number of the  byte
*
* Return: String result
*/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
