#include "main.h"

/**
  * print_sign - This is a program that print the sign of a number
  *  @n: This is a real number
  *
  * Return: Always 0 (if success)
  */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
