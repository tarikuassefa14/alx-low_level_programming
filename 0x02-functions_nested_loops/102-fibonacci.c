#include <stdio.h>

/**
 * main - return first 50 fabonacci
 * Description: print firs 50 fabonacci
 *
 * Return: 0 -> end of program
 *
 */

int main(void)
{
	int i;
	unsigned long ta1 = 0, ta2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = ta1 + ta2;
		printf("%lu", sum);
		ta1 = ta2;
		ta2 = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
