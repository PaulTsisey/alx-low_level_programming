#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @c: The number to be computed.
 *
 * Returns: The absolute value of a number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int av;

		av = c * -1;
		return (av);
	}
	return (c);
}
