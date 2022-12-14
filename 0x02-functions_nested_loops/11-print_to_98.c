#include "main.h"

/**
  * print_to_98 -  print all natural numbers from n to 98
  * @n: is an integer
  *
  * Return: Always 0 (if success)
  */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", 98);
	}
	else if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}

}
