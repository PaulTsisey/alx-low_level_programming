#include "main.h"

/**
 * squ_chk - to check the square root
 * @n: the number
 * @m: the square
 * Return: the answer.
 */

int squ_chk(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (-1);
	return (squ_chk(m + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: -1 if n doen't have a square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (squ_chk(1, n));
}
