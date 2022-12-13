#include "main.h"

/**
  * main - This is a program that print 10 times alphabet
  *
  * Return: Always 0 (if success)
  */
void print_alphabet_x10(void)
{
	char alp;
	int t;

	for (t = 0; t <= 9; t++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
