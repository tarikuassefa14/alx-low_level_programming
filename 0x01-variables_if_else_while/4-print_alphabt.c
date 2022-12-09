#include <stdio.h>

/**
 * main - Program that prints the alphabet lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cah = 'a';

	while (cah <= 'z')
	{
		if (cah != 'e' && cah != 'q')
		{
			putchar(cah);
		}
		cah++;
	}
	putchar('\n');
	return (0);
}
