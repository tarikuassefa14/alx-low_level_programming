#include "main.h"

/**
  * times_table - print  the 9 times table, starting with 0
  *
  * Return: Always 0 (if success)
  */
void times_table(void)
{
	int ha, hu, he;

	for (ha = 0; ha <= 9; ha++)
	{
		for (he = 0; he <= 9; he++)
		{
			hu = ha * he;
			if (he == 0)
				_putchar(hu + '0');
			else if (hu > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(hu / 10 + '0');
				_putchar(hu % 10 + '0');
			}
			else if (hu <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(hu + '0');
			}
		}
		_putchar('\n');
	}
}
