#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
/*betty style doc for function main goes there*/
/**
 * main - Positive anything is better than negative nothing
 *
 * Return: Always o (if Successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
