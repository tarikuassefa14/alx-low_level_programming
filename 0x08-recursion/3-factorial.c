#include "main.h"

/**
* factorial -  function that gives a given number's factorial
*
* @n: Number to equate factorial
*
* Return: The number of factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
