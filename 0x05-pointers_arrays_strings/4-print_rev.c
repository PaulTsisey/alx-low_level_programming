#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: the string
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[i])
		a++;

	while (a--)
		_putchar(s[a]);

	_putchar('\n');
}
