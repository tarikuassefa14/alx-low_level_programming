#include <stdio.h>

/**
 * main - Program that prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cah;

	for (cah = 'a'; cah <= 'z'; cah++)
		putchar(cah);
	for (cah = 'A'; cah <= 'Z'; cah++)
		putchar(cah);
	putchar('\n');
	return (0);
}

