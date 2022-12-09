#include <stdio.h>
/**
 * main - Entery point 
 * followed by a new line
 *Return: Always 0 (if success)
 */
int main(void)
{
	int l = 'a';
	
	while (l <= 'z')
	{
	putchar(l);
	l += 1;
	}
	putchar('\n');
	return (0);
}
