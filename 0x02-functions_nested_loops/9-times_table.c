#include "main.h"

/**
 * times_table - Prints the times table of 9
 * starting with 0
 * Return: void.
 */

void times_table(void)
{
	int mult1, mult2, ans, x, y;

	for (mult1 = 0; mult1 <= 9; mult1++)
	{
	for (mult2 = 0; mult2 <= 9; mult2++)
	{
		ans = mult1 * mult2;
	if (ans > 9)
	{
		x = ans % 10;
		y = (ans - x) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(y + '0');
		_putchar(x + '0');
	}
	else
	{
	if (mult2 != 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
	}
		_putchar(ans + '0');
	}
	}
	_putchar('\n');
	}
}
