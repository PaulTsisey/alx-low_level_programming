#include "main.h"

/**
 * void print_alphabet_X10 - prints 10 times the alphabet in lowercase
 *followed by a new line
 *Returns: void
 */

void print_alphabet_x10(void)
{
	int p = 0;
	char al;

	while (p <= 9)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
		p++;
	}
}
