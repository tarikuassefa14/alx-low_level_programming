#include "main.h"

/**
  * print_alphabet - This is a program that print alphabet
  *
  * Return: Always 0 (if success)
  */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);

	_putchar('\n');
}
