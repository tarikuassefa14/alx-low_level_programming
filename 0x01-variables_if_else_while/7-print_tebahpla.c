#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cah;

	for (cah = 'z'; cah >= 'a'; cah--)
	{
		putchar(cah);
	}
	putchar('\n');
	return (0);
}
