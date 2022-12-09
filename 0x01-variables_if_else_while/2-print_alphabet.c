#include <stdio.h>

/**
 * main - Program that prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t = 'a';

	while (t <= 'z')
	{
	putchar(t);
	t += 1;
	}
	putchar('\n');
	return (0);
}
