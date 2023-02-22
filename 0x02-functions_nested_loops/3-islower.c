#include "main.h"

/**
 *int _slower(int c) - checks for lowercase character
 *Return: 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
