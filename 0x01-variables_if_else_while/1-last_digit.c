#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
/*betty style doc for function main goes there*/
/**
 * main - The last digit printed the variable is greater or less than the value
 *
 * Return: Always o (if Successful)
 */
int main(void)
{
	int n;
	int ld;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	
	if (ld > 0)
	{
		printf("Last digit of %d is %d and is greater than  5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is and 0\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, ld);
	}
	return (0);
}

