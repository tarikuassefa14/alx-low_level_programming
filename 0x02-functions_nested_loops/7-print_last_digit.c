#include "main.h"

/**
  * print_last_digit - This is a program that print the last digit of a number
  * @k: This is a real number
  *
  * Return: Always 0 (if success)
  */
int print_last_digit(int k)
{
	int ta = k % 10;

	if (k < 0)
		ta = 0 - ta;
	_putchar(ta + '0');
	return (ta);
}
