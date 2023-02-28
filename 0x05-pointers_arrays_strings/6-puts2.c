#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int n = 0, t;

	while (*str)
	{
		n++;
		str++;
	}
	for (t = 0; t < n; t++)
		str--;
	for (t = 0; t < n; t++)
	{
		if (t % 2 == 0)
			_putchar(str[t]);
	}
	_putchar('\n');
}
