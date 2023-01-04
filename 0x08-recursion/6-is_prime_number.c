#include "main.h"

/**
 * is_prime - function that returns the power of number
 *
 * @n: This is number
 *
 * @y: This is counter
 *
 * Return: Prime value
 */

int is_prime(int n, int y)
{
	if (n == 1)
		return (0);
	else if (n % y == 0 && y != n && y != 1)
		return (0);
	else if (n % y == 0 && y == n)
		return (1);
	else
		return (is_prime(n, y + 1));
}

/**
* is_prime_number - check the  prime number
*
* @n: Checked number
*
* Return: Show an int 1 prime or an int 0 not prime
*/

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
