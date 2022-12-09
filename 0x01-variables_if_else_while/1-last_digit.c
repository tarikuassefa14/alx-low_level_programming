#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
/*betty style doc for function main goes there*/
/**
 * main - The last digit printed the variable is greater or less than the value
 *
 * Return: Always o (if Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (lastn == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else if (lastn < 6 && lastn != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
