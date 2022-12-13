#include "main.h"

/**
  * main - This is a program that print all natural numbers from n to 98
  *
  * Return: Always 0 (if success)
  */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (!(i == 98))
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (!(i == 98))
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
