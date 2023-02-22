#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *@n: The number to be treated
 *Return: Value of the last digit number
 */

int print_last_digit(int n)

{
	int p;

	p = n % 10;
	if (p < 0)
	{
		p = p * -1;
	}
	_putchar(p + '0');
	return (p);
}
