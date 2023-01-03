#include "main.h"

/**
* *_memcpy - function that copies the memory area.
*
* @s: Buff to filled memory area
*
* @b: Constant data byte
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
