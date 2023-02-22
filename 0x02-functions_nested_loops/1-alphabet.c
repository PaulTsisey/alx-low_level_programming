#include "main.h"

/**
 * main - prints all the alphabet in lowercase
 *followed by a newline
 *Return: Always 0
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
