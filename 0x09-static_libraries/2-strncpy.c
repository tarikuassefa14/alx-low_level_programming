#include "main.h"

/**
* _strncpy - A string copying function.
*
* @dest: The String destination
*
* @src: Concatenated string
*
* @n: Number of the  byte
*
* Return: String result
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
