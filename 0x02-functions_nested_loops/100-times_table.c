#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: number set the limit
 *
 * Return: void
 *
 */

void print_times_table(int n)
{
	int i, j, tatu;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				tatu = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (tatu < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mul % 10) + '0');
				}
				else if (tatu >= 10 && tatu < 100)
				{
					_putchar(' ');
					_putchar((tatu / 10) + '0');
					_putchar((tatu % 10) + '0');
				}
				else if (tatu >= 100 && j != 0)
				{
					_putchar((tatu / 100) + '0');
					_putchar((tatu / 10) % 10 + '0');
					_putchar((tatu % 10) + '0');
				}
				else
					_putchar((tatu % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
