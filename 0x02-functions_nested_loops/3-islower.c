#include "main.h"

/**
  * main - This is a program that check  function that checks for lowercase character
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
