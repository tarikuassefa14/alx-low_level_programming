#include <main.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (if success)
 */

int main(void)
{
	int first = 0, second = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = first + second;
		first = second;
		second = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);

	return (0);
}
