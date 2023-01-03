#include "main.h"

/**
* *_memcpy - function that copies the memory area.
*
* @dest: Buff to filled memory area
*
* @src: Constant data byte
*
* @n: Max bytes to copy
*
* Return: Memory area dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
