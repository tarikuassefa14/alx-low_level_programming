#include <stdio.h>

/**
 * main - return sum of natural numbes
 * computes and print sum of all multiple of 3 or 5 below 1024
 *
 * Return:  Always 0
 *
 */

int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
