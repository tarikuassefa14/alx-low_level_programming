#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (a = 48; a <= 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if ((j == 57) && (i == 56))
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
