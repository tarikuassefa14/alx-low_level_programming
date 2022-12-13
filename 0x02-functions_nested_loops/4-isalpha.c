#include "main.h"

/**
  * main - This is a program that print checks for alphabetic character
  *
  * Return: Always 0 (if success)
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
