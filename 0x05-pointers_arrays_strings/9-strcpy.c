#include "main.h"

/**
* *_strcpy - function that copies the specified string to the specified buffer
*
* @dest: Thr destination
*
* @src: The string pointeri
*
* Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int x, y = 0;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[y] = src[x];
		y++;
	}
	dest[y] = '\0';

	return (dest);
}
