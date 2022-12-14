#include "main.h"

/**
  * _islower - check function that checks for lowercase character
  * @c: This is an ASCII character
  *
  * Return: Always 0 (if success)
  */
int _islower(int c)
{
	if (c >= 'a' &&	c <= 'z')
		return (1);
	else
		return (0);
}
