#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - 101-crackme is a program that generates random valid passwords
  *
  * Return: Always 0 (if success)
  */

int main(void)
{
	int num;
	char x;

	srand(time(NULL));
	while (num <= 2645)
	{
		x = rand() % 128;
		num += x;
		putchar(x);
	}
	putchar(2772 - num);
	return (0);
}
