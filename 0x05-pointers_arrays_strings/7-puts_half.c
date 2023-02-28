#include "main.h"

/**
 * puts_half - prints half a string
 * followed by a new line
 * 
 * Return: void.
 */

void puts_half(char *str)
{
	int m = 0, n;

	while (*str)
	{
		m++;
		str++;
	}
	for (n = 0; n < m; n++)
		str--;
	n = (m % 2 ==00) ? m / 2 : (m + 1) / 2;
	for (; n < m; n++)
		_putchar(str[n]);

	_putchar('\n');
}
