#include "main.h"

/**
 * prime_check - check if number is a prime number
 * @x: the number
 * @y: check
 * Return: 1 if int is prime, 0 otherwise.
 */

int prime_check(int x, int y)
{
	if (x < 2 || x % y == 0)
		return (0);
	else if (y > x / 2)
		return (1);
	else
		return (prime_check(y + 1, x));
}

/**
 * is_prime_number - checks for prime numbers
 * @n: int number
 * Return:result.
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
