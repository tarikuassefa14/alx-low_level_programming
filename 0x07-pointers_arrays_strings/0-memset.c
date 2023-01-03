#include "main.h"

/**
* _memset - function that copies memory area.
*
* @s: Fill to memory area
*
* @b: Constant data byte
*
* @n: Max bytes to fill
*
* Return: Memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
