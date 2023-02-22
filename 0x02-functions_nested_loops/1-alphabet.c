#include "main.h"

/**
 *print_alphabet - prints all the alphabet in lowercase
 *followed by a newline
 *Return: void
 */

void print_alphabet(void)

{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	_putchar(lc);
	}
	_putchar('\n');
}
