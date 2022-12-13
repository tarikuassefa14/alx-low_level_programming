#include "main.h"

/**
  * main - This is a program that print every minute of the day of Jack Bauer
  *
  * Return: Always 0 (if success)
  */
void jack_bauer(void)
{
	int q, r;

	for (q = 0; q < 24; q++)
	{
		for (r = 0; r < 60; r++)
		{
			_putchar(q / 10 + '0');
			_putchar(q % 10 + '0');
			_putchar(':');
			_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
			_putchar('\n');
		}
	}
}
