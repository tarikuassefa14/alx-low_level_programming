#include "main.h"

/**
  * main - This is a program that print 10 times alphabet
  *
  * Return: Always 0 (if success)
  */
void print_to_98(int la)
{
	if (la > 98)
	{
		while (la >= 98)
		{
			printf("%d", la);
			if (la != 98)
			{
				printf(", ");
			}
			la--;
		}
	}
	else
	{
		while (la <= 98)
		{
			printf("%d", la);
			if (la != 98)
			{
				printf(", ");
			}
			la++;
		}
	}
	printf("\n");
}
