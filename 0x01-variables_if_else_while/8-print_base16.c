#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char cah;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}
	for (cah = 'a'; cah <= 'f'; cah++)
	{
		putchar(cah);
	}
	putchar('\n');
	return (0);
}
