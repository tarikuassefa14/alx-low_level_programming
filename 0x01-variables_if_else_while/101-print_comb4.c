#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k, m, l;

	for (k = 48; k < 58; k++)
	{
		for (m = 49; m < 58; m++)
		{
			for (o = 50; o < 58; o++)
			{
				if (l > m && m > k)
				{
					putchar(k);
					putchar(m);
					putchar(l);
					if (k != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
