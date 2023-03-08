#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number
 * Return: -1 if n < 0.
 */

int factorial(int n)
{
	int m;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		m = n * factorial(n - 1);
	return (x);
}
